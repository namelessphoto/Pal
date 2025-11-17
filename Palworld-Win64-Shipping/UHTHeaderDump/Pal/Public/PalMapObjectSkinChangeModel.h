#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectSkinChangeModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectSkinChangeModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> SkinChangerWidget;
    
    UPalMapObjectSkinChangeModel();

};

