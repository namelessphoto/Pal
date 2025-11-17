#pragma once
#include "CoreMinimal.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_Skin.generated.h"

UCLASS()
class PAL_API UPalShopProductGiver_Skin : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FName SkinName;
    
    UPROPERTY(Replicated)
    int32 Price;
    
public:
    UPalShopProductGiver_Skin();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

