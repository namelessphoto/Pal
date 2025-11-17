#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimItem_Target.h"
#include "RigUnit_HighlevelBase.h"
#include "RigUnit_AimBoneMath.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InputTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimItem_Target Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimItem_Target Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    FRigUnit_AimBoneMath();
};

