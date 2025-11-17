#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "EControlRigVectorKind.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_TwoBoneIKSimple_DebugSettings.h"
#include "RigUnit_TwoBoneIKSimplePerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey ItemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey ItemB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey EffectorItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Effector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondaryAxisWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigVectorKind PoleVectorKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey PoleVectorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchStartRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchMaximumRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemALength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemBLength;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCachedRigElement CachedItemAIndex;
    
    UPROPERTY()
    FCachedRigElement CachedItemBIndex;
    
    UPROPERTY()
    FCachedRigElement CachedEffectorItemIndex;
    
    UPROPERTY()
    FCachedRigElement CachedPoleVectorSpaceIndex;
    
    FRigUnit_TwoBoneIKSimplePerItem();
};

