#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPoleVectorOption.h"
#include "FBIKBoneLimit.h"
#include "FBIKConstraintOption.generated.h"

USTRUCT(BlueprintType)
struct FFBIKConstraintOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bUseStiffness;
    
    UPROPERTY(EditAnywhere)
    FVector LinearStiffness;
    
    UPROPERTY(EditAnywhere)
    FVector AngularStiffness;
    
    UPROPERTY(EditAnywhere)
    bool bUseAngularLimit;
    
    UPROPERTY(EditAnywhere)
    FFBIKBoneLimit AngularLimit;
    
    UPROPERTY(EditAnywhere)
    bool bUsePoleVector;
    
    UPROPERTY(EditAnywhere)
    EPoleVectorOption PoleVectorOption;
    
    UPROPERTY(EditAnywhere)
    FVector PoleVector;
    
    UPROPERTY(EditAnywhere)
    FRotator OffsetRotation;
    
    FULLBODYIK_API FFBIKConstraintOption();
};

