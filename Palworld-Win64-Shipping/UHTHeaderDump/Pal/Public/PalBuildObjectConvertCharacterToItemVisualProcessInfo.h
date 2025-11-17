#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBuildObjectConvertCharacterToItemVisualProcessInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectConvertCharacterToItemVisualProcessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly)
    float ConvertProgressRate;
    
    PAL_API FPalBuildObjectConvertCharacterToItemVisualProcessInfo();
};

