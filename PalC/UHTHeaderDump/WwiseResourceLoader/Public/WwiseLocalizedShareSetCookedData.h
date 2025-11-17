#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseFileHandler -ObjectName=WwiseLanguageCookedData -FallbackName=WwiseLanguageCookedData
#include "WwiseShareSetCookedData.h"
#include "WwiseLocalizedShareSetCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseLocalizedShareSetCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FWwiseLanguageCookedData, FWwiseShareSetCookedData> ShareSetLanguageMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ShareSetId;
    
    FWwiseLocalizedShareSetCookedData();
};

