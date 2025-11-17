#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EnhancedActionKeyMapping.h"
#include "PlayerMappableInputConfig.generated.h"

class UInputAction;
class UInputMappingContext;
class UObject;

UCLASS(BlueprintType)
class ENHANCEDINPUT_API UPlayerMappableInputConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ConfigName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ConfigDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDeprecated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UInputMappingContext*, int32> Contexts;
    
public:
    UPlayerMappableInputConfig();

    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintPure)
    bool IsDeprecated() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetMetadata() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UInputMappingContext*, int32> GetMappingContexts() const;
    
    UFUNCTION(BlueprintPure)
    FEnhancedActionKeyMapping GetMappingByName(const FName MappingName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(const UInputAction* InAction) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetConfigName() const;
    
};

