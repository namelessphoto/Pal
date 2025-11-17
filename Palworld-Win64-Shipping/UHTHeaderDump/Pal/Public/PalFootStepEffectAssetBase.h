#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EPalLandingType.h"
#include "FootStepEffectInfo.h"
#include "PalFootStepEffectAssetBase.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class PAL_API UPalFootStepEffectAssetBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalLandingType, FFootStepEffectInfo> FootStepEffectInfo;
    
public:
    UPalFootStepEffectAssetBase();

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetEffectObjectPtr(EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface) const;
    
    UFUNCTION(BlueprintPure)
    bool GetEffectInfo(EPalLandingType LandingType, FFootStepEffectInfo& OutVal) const;
    
};

