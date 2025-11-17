#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalNPCInteractConditionFunctions.generated.h"

UCLASS(BlueprintType)
class UPalNPCInteractConditionFunctions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Owner;
    
    UPalNPCInteractConditionFunctions();

    UFUNCTION(BlueprintCallable)
    void SetOwner(UObject* NewOwner);
    
    UFUNCTION(BlueprintPure)
    UObject* GetOwner() const;
    
};

