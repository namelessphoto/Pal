#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LegacyCameraShakeFunctionLibrary.generated.h"

class UCameraShakeBase;
class ULegacyCameraShake;

UCLASS(BlueprintType)
class GAMEPLAYCAMERAS_API ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULegacyCameraShakeFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static ULegacyCameraShake* Conv_LegacyCameraShake(UCameraShakeBase* CameraShake);
    
};

