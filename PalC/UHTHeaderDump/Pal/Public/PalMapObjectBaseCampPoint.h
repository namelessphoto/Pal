#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectBaseCampPoint.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectBaseCampPoint : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> PalBoxWiget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> CampTaskWiget;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
public:
    UPalMapObjectBaseCampPoint();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool IsSameGuildInLocalPlayer() const;
    
};

