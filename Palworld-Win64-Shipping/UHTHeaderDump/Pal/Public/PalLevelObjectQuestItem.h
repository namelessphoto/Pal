#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalLevelObjectQuestItem.generated.h"

class AActor;
class APalPlayerState;
class UPalItemContainer;
class UPalQuestBlock;

UCLASS()
class PAL_API APalLevelObjectQuestItem : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle QuestId;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalQuestBlock> QuestBlockClass;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData ItemId;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    APalLevelObjectQuestItem(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void RemovePickupBlockInLocal();
    
    UFUNCTION()
    void OnUpdateInventory(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdatedQuest(const FName& InQuestId);
    
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupInLocal();
    
private:
    UFUNCTION()
    void OnOrderedQuest(const FName& InQuestId);
    
    UFUNCTION()
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
    UFUNCTION()
    void OnCompletedQuest(const FName& InQuestId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedActiveInLocal(bool bIsActive);
    

    // Fix for true pure virtual functions not being implemented
};

