// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralMeshGenerator.h"

#include "ProceduralMeshComponent.h"
#include "Curves/CurveFloat.h"

UProceduralMeshGenerator::UProceduralMeshGenerator()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	static ConstructorHelpers::FObjectFinder<UCurveFloat> DefaultCurve (TEXT("Blueprint'/DiscmanScrollingProceduralMesh/Blueprints/TerrainYSmoothing.TerrainYSmoothing'"));
	if(DefaultCurve.Object)
	{
		PerlinSmoothingCurve = DefaultCurve.Object;
	}
}

void UProceduralMeshGenerator::BeginPlay()
{
	Super::BeginPlay();

	if(GetOwner())
	{
		ProceduralMeshComponent = Cast<UProceduralMeshComponent>(GetOwner()->GetComponentByClass(UProceduralMeshComponent::StaticClass()));

		// Generate 10 pieces ahead of time
		for(int i = 0; i < 10; ++i)
		{
			GenerateNextSection();
			ShowNextSection();
		}
	}
}

void UProceduralMeshGenerator::GenerateNextSection()
{
	if(!ProceduralMeshComponent)
	{
		return;
	}

	// Declare All The Variables Required To Generate Said Mesh
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;
	bool bCreateCollision = false;
	
	// Generate The Actual Mesh
	for(int X = 0; X < MeshSections.X; ++X)
	{
		for(int Y = 0; Y < MeshSections.Y; ++Y)
		{
			// Only offset backwards
			FVector2D MeshSectionOffset = FVector2D(SectionIndexCounter * MeshSections.X * VertexSpacing, 0);
			
			FVector2D Point1Location = FVector2D(X * VertexSpacing + 0 * VertexSpacing, Y * VertexSpacing + 0 * VertexSpacing) - MeshSectionOffset;
			FVector2D Point2Location = FVector2D(X * VertexSpacing + 1 * VertexSpacing, Y * VertexSpacing + 0 * VertexSpacing) - MeshSectionOffset;
			FVector2D Point3Location = FVector2D(X * VertexSpacing + 1 * VertexSpacing, Y * VertexSpacing + 1 * VertexSpacing) - MeshSectionOffset;
			FVector2D Point4Location = FVector2D(X * VertexSpacing + 0 * VertexSpacing, Y * VertexSpacing + 1 * VertexSpacing) - MeshSectionOffset;
			
			float Point1ZOffset = ( FMath::PerlinNoise2D(Point1Location * PerlinZoomFactor) + 1.0f ) / 2.0f;
			float Point2ZOffset = ( FMath::PerlinNoise2D(Point2Location * PerlinZoomFactor) + 1.0f ) / 2.0f;
			float Point3ZOffset = ( FMath::PerlinNoise2D(Point3Location * PerlinZoomFactor) + 1.0f ) / 2.0f;
			float Point4ZOffset = ( FMath::PerlinNoise2D(Point4Location * PerlinZoomFactor) + 1.0f ) / 2.0f;

			if(PerlinSmoothingCurve)
			{
				const float NormalizedY0 = ((float)Y + 0.0f) / MeshSections.Y;
				const float NormalizedY1 = ((float)Y + 1.0f) / MeshSections.Y;
				
				Point1ZOffset = FMath::Clamp( Point1ZOffset, 0.0f, PerlinSmoothingCurve->GetFloatValue(NormalizedY0)); 
				Point2ZOffset = FMath::Clamp( Point2ZOffset, 0.0f, PerlinSmoothingCurve->GetFloatValue(NormalizedY0)); 
				Point3ZOffset = FMath::Clamp( Point3ZOffset, 0.0f, PerlinSmoothingCurve->GetFloatValue(NormalizedY1)); 
				Point4ZOffset = FMath::Clamp( Point4ZOffset, 0.0f, PerlinSmoothingCurve->GetFloatValue(NormalizedY1)); 
			}

			
			FVector Point1 = FVector( Point1Location.X, Point1Location.Y, Point1ZOffset * MaxPerlinHeight );
			FVector Point2 = FVector( Point2Location.X, Point2Location.Y, Point2ZOffset * MaxPerlinHeight );
			FVector Point3 = FVector( Point3Location.X, Point3Location.Y, Point3ZOffset * MaxPerlinHeight );
			FVector Point4 = FVector( Point4Location.X, Point4Location.Y, Point4ZOffset * MaxPerlinHeight );
 
			Vertices.Add(Point1);
			Vertices.Add(Point2);
			Vertices.Add(Point3);
			Vertices.Add(Point4);

			Triangles.Add(Vertices.Num() - 4);
			Triangles.Add(Vertices.Num() - 2);
			Triangles.Add(Vertices.Num() - 3);

			Triangles.Add(Vertices.Num() - 4);
			Triangles.Add(Vertices.Num() - 1);
			Triangles.Add(Vertices.Num() - 2);
		}	
	}

	ProceduralMeshComponent->CreateMeshSection(SectionIndexCounter++, Vertices, Triangles, Normals, UV0,VertexColors, Tangents, bCreateCollision);
}

void UProceduralMeshGenerator::ShowNextSection()
{
}


