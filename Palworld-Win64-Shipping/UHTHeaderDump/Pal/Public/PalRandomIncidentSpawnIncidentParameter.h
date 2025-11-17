#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCAppearFlagData.h"
#include "PalRandomIncidentSpawnIncidentParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnIncidentParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName IncidentId;
    
    UPROPERTY(EditAnywhere)
    FName SettingName;
    
    UPROPERTY(EditAnywhere)
    int32 LotteryRate;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_NPCAppearFlagData AppearFlag;
    
    UPROPERTY(EditAnywhere)
    bool AppearFlagCondition;
    
    PAL_API FPalRandomIncidentSpawnIncidentParameter();
};

