#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_BoneHarmonics_BoneTarget.h"
#include "RigUnit_BoneHarmonics_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_BoneHarmonics.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigAnimEasingType WaveEase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEulerRotationOrder RotationOrder;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FRigUnit_BoneHarmonics_WorkData WorkData;
    
    FRigUnit_BoneHarmonics();
};

