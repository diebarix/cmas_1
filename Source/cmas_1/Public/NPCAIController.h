// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h" //Esta libreria es indispensable
#include "NPCAIController.generated.h"

/**
 * 
 */
UCLASS()
class CMAS_1_API ANPCAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	explicit ANPCAIController(FObjectInitializer const& ObjectInitializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;
};
