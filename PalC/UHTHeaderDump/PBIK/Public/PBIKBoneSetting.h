#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPBIKLimitType.h"
#include "PBIKBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct PBIK_API FPBIKBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
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
    
    FPBIKBoneSetting();
};

