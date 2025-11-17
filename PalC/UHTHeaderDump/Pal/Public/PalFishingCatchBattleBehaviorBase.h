#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFishingCatchBattleInfo.h"
#include "PalFishingCatchBattleBehaviorBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalFishingCatchBattleBehaviorBase : public UObject {
    GENERATED_BODY()
public:
    UPalFishingCatchBattleBehaviorBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(const FPalFishingCatchBattleInfo& Info);
    
};

