#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataRegistryCachePolicy.h"
#include "DataRegistryIdFormat.h"
#include "DataRegistry.generated.h"

class UDataRegistrySource;
class UScriptStruct;

UCLASS()
class DATAREGISTRY_API UDataRegistry : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, EditDefaultsOnly)
    FName RegistryType;
    
    UPROPERTY(EditDefaultsOnly)
    FDataRegistryIdFormat IdFormat;
    
    UPROPERTY(AssetRegistrySearchable, EditDefaultsOnly)
    UScriptStruct* ItemStruct;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UDataRegistrySource*> DataSources;
    
    UPROPERTY(Instanced, Transient, VisibleDefaultsOnly)
    TArray<UDataRegistrySource*> RuntimeSources;
    
    UPROPERTY(EditDefaultsOnly)
    float TimerUpdateFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    FDataRegistryCachePolicy DefaultCachePolicy;
    
public:
    UDataRegistry();

};

