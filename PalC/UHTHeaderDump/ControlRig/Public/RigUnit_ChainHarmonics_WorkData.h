#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "RigUnit_ChainHarmonics_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_ChainHarmonics_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Time;
    
    UPROPERTY()
    TArray<FCachedRigElement> Items;
    
    UPROPERTY()
    TArray<float> Ratio;
    
    UPROPERTY()
    TArray<FVector> LocalTip;
    
    UPROPERTY()
    TArray<FVector> PendulumTip;
    
    UPROPERTY()
    TArray<FVector> PendulumPosition;
    
    UPROPERTY()
    TArray<FVector> PendulumVelocity;
    
    UPROPERTY()
    TArray<FVector> HierarchyLine;
    
    UPROPERTY()
    TArray<FVector> VelocityLines;
    
    FRigUnit_ChainHarmonics_WorkData();
};

