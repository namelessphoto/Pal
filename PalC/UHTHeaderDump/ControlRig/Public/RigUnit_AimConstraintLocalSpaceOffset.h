#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FilterOptionPerAxis -FallbackName=FilterOptionPerAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "ConstraintParent.h"
#include "RigElementKey.h"
#include "RigUnit_AimConstraint_AdvancedSettings.h"
#include "RigUnit_AimConstraint_WorldUp.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_AimConstraintLocalSpaceOffset.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector UpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimConstraint_WorldUp WorldUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConstraintParent> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY()
    FCachedRigElement WorldUpSpaceCache;
    
    UPROPERTY()
    FCachedRigElement ChildCache;
    
    UPROPERTY()
    TArray<FCachedRigElement> ParentCaches;
    
    FRigUnit_AimConstraintLocalSpaceOffset();
};

