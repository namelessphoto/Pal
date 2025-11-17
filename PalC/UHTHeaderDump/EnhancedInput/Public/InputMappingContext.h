#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EnhancedActionKeyMapping.h"
#include "InputMappingContext.generated.h"

class UInputAction;

UCLASS(BlueprintType, Config=Input)
class ENHANCEDINPUT_API UInputMappingContext : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FEnhancedActionKeyMapping> Mappings;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ContextDescription;
    
    UInputMappingContext();

    UFUNCTION(BlueprintCallable)
    void UnmapKey(const UInputAction* action, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAllKeysFromAction(const UInputAction* action);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAll();
    
    UFUNCTION(BlueprintCallable)
    void UnmapAction(const UInputAction* action);
    
    UFUNCTION(BlueprintCallable)
    FEnhancedActionKeyMapping MapKey(const UInputAction* action, FKey ToKey);
    
};

