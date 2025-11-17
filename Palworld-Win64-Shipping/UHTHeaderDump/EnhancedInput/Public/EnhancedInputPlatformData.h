#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnhancedInputPlatformData.generated.h"

class UInputMappingContext;

UCLASS(Abstract, BlueprintType)
class ENHANCEDINPUT_API UEnhancedInputPlatformData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<UInputMappingContext*, UInputMappingContext*> MappingContextRedirects;
    
public:
    UEnhancedInputPlatformData();

    UFUNCTION(BlueprintPure)
    UInputMappingContext* GetContextRedirect(UInputMappingContext* InContext) const;
    
};

