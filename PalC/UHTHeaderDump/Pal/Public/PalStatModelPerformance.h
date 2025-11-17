#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStatModelPerformance.generated.h"

UCLASS(BlueprintType)
class UPalStatModelPerformance : public UObject {
    GENERATED_BODY()
public:
    UPalStatModelPerformance();

    UFUNCTION(BlueprintCallable)
    void SetupInitializeStat(float FrameTime, float GameThreadTime, float RenderThreadTime, float GPUTime);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
};

