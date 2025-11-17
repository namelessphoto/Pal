#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "PalAxisKeyConfigKeys.h"
#include "PalKeyConfigKeys.h"
#include "PalKeyConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalKeyConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config)
    TMap<FName, FPalKeyConfigKeys> MouseAndKeyboardActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config)
    TArray<FPalAxisKeyConfigKeys> MouseAndKeyboardAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, Config)
    TMap<FName, FPalKeyConfigKeys> GamePadActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config)
    TArray<FPalAxisKeyConfigKeys> GamePadAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, Config)
    TMap<FName, FKey> MouseAndKeyboardUIInputMappings;
    
    UPROPERTY(BlueprintReadWrite, Config)
    TMap<FName, FKey> GamePadUIInputMappings;
    
    PAL_API FPalKeyConfigSettings();
};

