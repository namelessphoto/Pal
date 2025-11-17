#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "RigUnit_BoneHarmonics_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_BoneHarmonics_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    FVector WaveTime;
    
    FRigUnit_BoneHarmonics_WorkData();
};

