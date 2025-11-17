#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENiagaraCullReaction.h"
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
#include "NiagaraPerfBaselineStats.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEffectType.generated.h"

class UNiagaraBaselineController;
class UNiagaraSignificanceHandler;
class UNiagaraValidationRule;

UCLASS(PerObjectConfig, Config=Niagara)
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAllowCullingForLocalPlayers;
    
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UNiagaraValidationRule*> ValidationRules;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraBaselineController* PerformanceBaselineController;
    
    UPROPERTY(Config)
    FNiagaraPerfBaselineStats PerfBaselineStats;
    
    UPROPERTY(Config)
    FGuid PerfBaselineVersion;
    
public:
    UNiagaraEffectType();

};

