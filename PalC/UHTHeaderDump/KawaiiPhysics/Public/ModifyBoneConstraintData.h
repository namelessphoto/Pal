#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EXPBDComplianceType.h"
#include "ModifyBoneConstraintData.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FModifyBoneConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BoneName1;
    
    UPROPERTY()
    FName BoneName2;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference1;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference2;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCompliance;
    
    UPROPERTY(EditAnywhere)
    EXPBDComplianceType ComplianceType;
    
    FModifyBoneConstraintData();
};

