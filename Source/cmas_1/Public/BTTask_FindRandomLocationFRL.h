// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindRandomLocationFRL.generated.h"

/**
 * 
 */
UCLASS()
class CMAS_1_API UBTTask_FindRandomLocationFRL : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	explicit UBTTask_FindRandomLocationFRL(FObjectInitializer const& ObjectInitializer);

	virtual EBTNodeResult::Type	ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI NPC", meta = (AllowPrivateAccess = "true"))
	float SearchRadius = 1500.0f;
};
