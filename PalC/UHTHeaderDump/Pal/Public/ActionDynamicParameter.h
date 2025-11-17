#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalNetArchive.h"
#include "ActionDynamicParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActionDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* ActionTarget;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> OtherActionTargets;
    
    UPROPERTY()
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FVector ActionVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GeneralPurposeIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FVector DummyTargetLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid TargetMapObjectInstanceId;
    
    UPROPERTY()
    FGuid ActionID;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsAdjustTransform;
    
    UPROPERTY()
    FPalNetArchive Blackboard;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NetRandSeed;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsReflectedForClient;
    
    PAL_API FActionDynamicParameter();
};

