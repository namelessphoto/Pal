#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimItem_Target.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_AimItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimItem_Target Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimItem_Target Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedItem;
    
    UPROPERTY()
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY()
    FCachedRigElement SecondaryCachedSpace;
    
    FRigUnit_AimItem();
};

