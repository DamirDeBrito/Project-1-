// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProceduralMeshGenerator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DISCMANSCROLLINGPROCEDURALMESH_API UProceduralMeshGenerator : public UActorComponent
{
	GENERATED_BODY()

public:	

	UProceduralMeshGenerator();

	void GenerateNextSection();

	void ShowNextSection();

	UFUNCTION(CallInEditor)
	void RecalculateFirstSection() { GenerateNextSection(); }
	
protected:

	virtual void BeginPlay() override;

protected: // Variables

	UPROPERTY(EditAnywhere)
	FVector2D MeshSections = FVector2D(25, 10);

	UPROPERTY(EditAnywhere)
	float VertexSpacing = 100.0f;

	UPROPERTY(EditAnywhere)
	float  MaxPerlinHeight = 500.0f;

	UPROPERTY(EditAnywhere)
	float PerlinZoomFactor = 0.001f;
	
	int LastShownSectionIndex = 0;
	int SectionIndexCounter = 0;
	
	UPROPERTY(BlueprintReadOnly)
	class UProceduralMeshComponent* ProceduralMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCurveFloat* PerlinSmoothingCurve;

};
