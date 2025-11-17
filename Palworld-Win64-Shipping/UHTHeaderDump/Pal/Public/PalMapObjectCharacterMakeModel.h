#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectCharacterMakeModel.generated.h"

class UPalHUDDispatchParameterBase;
class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectCharacterMakeModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> CharacterMakeWidget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> CharacterDressingWidget;
    
    UPalMapObjectCharacterMakeModel();

protected:
    UFUNCTION()
    void OnCloseCheckDialog(bool Result);
    
    UFUNCTION()
    void OnCloseCharacterMake(UPalHUDDispatchParameterBase* Parameter);
    
};

