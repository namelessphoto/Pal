#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PBIK -ObjectName=EPBIKLimitType -FallbackName=EPBIKLimitType
#include "IKRig_PBIKBoneSettings.generated.h"

UCLASS()
class IKRIG_API UIKRig_PBIKBoneSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName bone;
    
    UPROPERTY(EditAnywhere)
    float RotationStiffness;
    
    UPROPERTY(EditAnywhere)
    float PositionStiffness;
    
    UPROPERTY(EditAnywhere)
    EPBIKLimitType X;
    
    UPROPERTY(EditAnywhere)
    float MinX;
    
    UPROPERTY(EditAnywhere)
    float MaxX;
    
    UPROPERTY(EditAnywhere)
    EPBIKLimitType Y;
    
    UPROPERTY(EditAnywhere)
    float MinY;
    
    UPROPERTY(EditAnywhere)
    float MaxY;
    
    UPROPERTY(EditAnywhere)
    EPBIKLimitType Z;
    
    UPROPERTY(EditAnywhere)
    float MinZ;
    
    UPROPERTY(EditAnywhere)
    float MaxZ;
    
    UPROPERTY(EditAnywhere)
    bool bUsePreferredAngles;
    
    UPROPERTY(EditAnywhere)
    FVector PreferredAngles;
    
    UIKRig_PBIKBoneSettings();

};

