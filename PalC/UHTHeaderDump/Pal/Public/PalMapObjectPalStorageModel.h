#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPalStorageModel.generated.h"

class AActor;
class UPalBaseCampModel;
class UPalGuildPalStorage;
class UPalIndividualCharacterHandle;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalMapObjectPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnedCharacterDelegate, FPalInstanceID, IndividualId, int32, PhantomId);
    
    UPROPERTY(BlueprintAssignable)
    FSpawnedCharacterDelegate OnSpawnedCharacterDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalInstanceID> SpawnedIndividualIds;
    
public:
    UPalMapObjectPalStorageModel();

private:
    UFUNCTION()
    void OnUpdateGuildPalStorage_ServerInternal(UPalBaseCampModel* BaseCampModel, UPalGuildPalStorage* GuildPalStorage);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggerInteract_BP(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION()
    void OnSpawnedPhantomCharacter(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION()
    void OnOverlapEndCageWalls(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION()
    void OnOverlapBeginCageWalls(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION()
    void OnDroppedCharacterToPhantom(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION()
    void OnAddGuildPalStorage_ServerInternal(UPalIndividualCharacterHandle* NewCharacter);
    
};

