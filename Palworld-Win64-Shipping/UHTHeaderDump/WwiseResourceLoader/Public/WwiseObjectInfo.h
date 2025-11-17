#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "WwiseObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid WwiseGuid;
    
    UPROPERTY(EditAnywhere)
    uint32 WwiseShortId;
    
    UPROPERTY(EditAnywhere)
    FName WwiseName;
    
    UPROPERTY(EditAnywhere)
    uint32 HardCodedSoundBankShortId;
    
    FWwiseObjectInfo();
};

