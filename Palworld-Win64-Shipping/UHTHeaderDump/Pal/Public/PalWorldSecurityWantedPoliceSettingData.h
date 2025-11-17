#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalWorldSecurityWantedPoliceSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSecurityWantedPoliceSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalHumanData PoliceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PoliceNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PoliceLevel;
    
    PAL_API FPalWorldSecurityWantedPoliceSettingData();
};

