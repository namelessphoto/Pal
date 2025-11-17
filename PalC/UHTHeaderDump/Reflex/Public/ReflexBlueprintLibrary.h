#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EReflexMode.h"
#include "ReflexBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class REFLEX_API UReflexBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReflexBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const EReflexMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlashIndicatorEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static EReflexMode GetReflexMode();
    
    UFUNCTION(BlueprintPure)
    static bool GetReflexAvailable();
    
    UFUNCTION(BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static bool GetFlashIndicatorEnabled();
    
};

