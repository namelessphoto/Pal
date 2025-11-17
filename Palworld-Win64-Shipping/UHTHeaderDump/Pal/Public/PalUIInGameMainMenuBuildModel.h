#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIInGameMainMenuBuildModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIInGameMainMenuBuildModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIInGameMainMenuBuildModel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dispose();
    
};

