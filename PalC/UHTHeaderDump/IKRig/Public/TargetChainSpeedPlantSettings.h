#pragma once
#include "CoreMinimal.h"
#include "TargetChainSpeedPlantSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FTargetChainSpeedPlantSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSpeedPlanting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SpeedCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnplantStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnplantCriticalDamping;
    
    FTargetChainSpeedPlantSettings();
};

