// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindRandomLocationFRL.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPCAIController.h"

UBTTask_FindRandomLocationFRL::UBTTask_FindRandomLocationFRL(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Random Location in NavMesh";
}

EBTNodeResult::Type 
UBTTask_FindRandomLocationFRL::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get AI Controller
	if (auto const Cont = Cast<ANPCAIController>(OwnerComp.GetAIOwner()))
	{
		if (auto const NPC = Cont->GetPawn())
		{
			// Obterner posicion del npc
			auto const Origin = NPC->GetActorLocation();
			// Get Navmesh systme
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Loc;
				if (NavSys->GetRandomPointInNavigableRadius(Origin, SearchRadius, Loc))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);

						//Finish With Success
						FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
						return EBTNodeResult::Succeeded;
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
