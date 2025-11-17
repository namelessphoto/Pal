#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalInstanceID.h"
#include "PalItemUseProcessor.generated.h"

class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class UPalItemUseProcessor : public UObject {
    GENERATED_BODY()
public:
    UPalItemUseProcessor();

    UFUNCTION(BlueprintNativeEvent)
    bool UseItemToCharacter_ServerInternal(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanUseItemToCharacter(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID);
    
};

