#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDataTableRowName_FishPondLotteryNameData.h"
#include "PalMapObjectFishPondLotteryTargetData.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFishPondParameterComponent.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFishPondParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_FishPondLotteryNameData, FPalMapObjectFishPondLotteryTargetData> LotteryDataMapByLotteryName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StoreCharacterMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ItemChestSlotNum;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> ObtainCharactersUIClass;
    
    UPalMapObjectFishPondParameterComponent(const FObjectInitializer& ObjectInitializer);

};

