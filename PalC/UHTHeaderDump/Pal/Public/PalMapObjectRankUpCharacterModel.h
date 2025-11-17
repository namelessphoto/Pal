#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRankUpCharacterResultDelegateDelegate.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRankUpCharacterModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectRankUpCharacterModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectRankUpCharacterResultDelegate OnReceiveRequestResultDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
public:
    UPalMapObjectRankUpCharacterModel();

private:
    UFUNCTION()
    void RequestRankup_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION()
    void ReceiveOperationResult(const int32 ResultInt);
    
};

