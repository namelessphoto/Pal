#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRecoverOtomoModel.generated.h"

class UPalIndividualCharacterContainer;
class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectRecoverOtomoModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RecoverAmountBySec;
    
    UPROPERTY()
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
public:
    UPalMapObjectRecoverOtomoModel();

private:
    UFUNCTION()
    void StoreAllOtomo_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestRecoverAllOtomo_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void OnUpdateCharacterContainer(UPalIndividualCharacterContainer* Container);
    
    UFUNCTION()
    void ObtainAll_ServerInternal(const int32 RequestPlayerId);
    
};

