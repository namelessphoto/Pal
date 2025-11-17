#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyScriptConstraint.h"
#include "ENiagaraModuleDependencyType.h"
#include "NiagaraModuleDependency.generated.h"

USTRUCT()
struct FNiagaraModuleDependency {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName ID;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    ENiagaraModuleDependencyType Type;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FString RequiredVersion;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    int32 OnlyEvaluateInScriptUsage;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FText Description;
    
    NIAGARA_API FNiagaraModuleDependency();
};

