#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDamageInfo.h"
#include "PalDamagePopUpManager.generated.h"

class AActor;

UCLASS(BlueprintType)
class PAL_API UPalDamagePopUpManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddDamagePopupDelegate, const FPalDamageInfo&, DamageInfo, AActor*, Defender);
    
    UPROPERTY(BlueprintAssignable)
    FAddDamagePopupDelegate OnAddDamagePopupDelegate;
    
    UPalDamagePopUpManager();

    UFUNCTION(BlueprintCallable)
    void AddDamagePopUp(const FPalDamageInfo& DamageInfo, AActor* Defender);
    
};

