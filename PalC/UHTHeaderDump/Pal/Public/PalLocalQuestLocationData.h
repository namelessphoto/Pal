#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalQuestTrackingLocationSettingData.h"
#include "PalLocalQuestLocationData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalQuestLocationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalQuestTrackingLocationSettingData SettingData;
    
    UPROPERTY()
    TArray<FGuid> LocationIdArray;
    
    PAL_API FPalLocalQuestLocationData();
};

