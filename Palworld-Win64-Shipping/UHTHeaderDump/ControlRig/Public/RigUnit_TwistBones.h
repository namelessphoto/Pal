#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_TwistBones_WorkData.h"
#include "RigUnit_TwistBones.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EndBone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector TwistAxis;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector PoleAxis;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigAnimEasingType TwistEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_TwistBones_WorkData WorkData;
    
    FRigUnit_TwistBones();
};

