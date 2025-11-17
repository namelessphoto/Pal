#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalOptionWorldSettings.h"
#include "PalHUDDispatchParameter_WorldSetting.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_WorldSetting : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNewWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString WorldSaveDirectoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalOptionWorldSettings CachedWorldSetting;
    
    UPalHUDDispatchParameter_WorldSetting();

};

