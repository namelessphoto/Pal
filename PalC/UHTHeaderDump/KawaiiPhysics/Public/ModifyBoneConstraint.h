#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EXPBDComplianceType.h"
#include "ModifyBoneConstraint.generated.h"

USTRUCT()
struct FModifyBoneConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone1;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Bone2;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCompliance;
    
    UPROPERTY(EditAnywhere)
    EXPBDComplianceType ComplianceType;
    
    UPROPERTY()
    int32 ModifyBoneIndex1;
    
    UPROPERTY()
    int32 ModifyBoneIndex2;
    
    UPROPERTY()
    float Length;
    
    UPROPERTY()
    bool bIsDummy;
    
    UPROPERTY()
    float Lambda;
    
    KAWAIIPHYSICS_API FModifyBoneConstraint();
};

