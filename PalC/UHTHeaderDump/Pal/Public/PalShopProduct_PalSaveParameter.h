#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalIndividualCharacterSaveParameter.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_PalSaveParameter.generated.h"

UCLASS()
class PAL_API UPalShopProduct_PalSaveParameter : public UPalShopProductBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FPalIndividualCharacterSaveParameter ProductPalSaveParameter;
    
    UPROPERTY(Transient)
    FGuid ReservedPlayerUID;
    
public:
    UPalShopProduct_PalSaveParameter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    void GetProductPalParameter(FPalIndividualCharacterSaveParameter& outParameter) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPrice(const FGuid& PlayerUId) const;
    
};

