#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_Character.generated.h"

UCLASS()
class PAL_API UPalShopProductGiver_Character : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FPalIndividualCharacterSaveParameter ProductPalSaveParameter;
    
    UPROPERTY()
    FPalCharacterStoredParameterId StoredCharacterParameterID;
    
    UPROPERTY(Transient)
    FGuid ReservedPlayerUID;
    
public:
    UPalShopProductGiver_Character();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnCreatedBuyPal(FPalInstanceID CreatedPalInstanceID);
    
};

