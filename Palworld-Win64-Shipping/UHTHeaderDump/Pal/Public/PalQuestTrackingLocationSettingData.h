#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestTrackingLocationSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestTrackingLocationSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> FixedLocationPointArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalMonsterData> TrackingPalIdArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalHumanData> TrackingNPCIdArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataTableRowName_NPCUniqueData> TrackingUniqueNPCIdArray;
    
    PAL_API FPalQuestTrackingLocationSettingData();
};

