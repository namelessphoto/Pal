#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "PalBuildObject.h"
#include "PalInstanceID.h"
#include "PalBuildObjectPalStorage.generated.h"

class AActor;
class APalCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class UShapeComponent;
class UStaticMeshComponent;

UCLASS()
class APalBuildObjectPalStorage : public APalBuildObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOverlapAreaDelegate, UPrimitiveComponent*, OverlappedComp, AActor*, OtherActor, UPrimitiveComponent*, OtherComp);
    
    UPROPERTY(BlueprintCallable, BlueprintReadOnly)
    FOverlapAreaDelegate OnOverlapBeginCageArea;
    
    UPROPERTY(BlueprintCallable, BlueprintReadOnly)
    FOverlapAreaDelegate OnOverlapEndCageArea;
    
    UPROPERTY(BlueprintCallable, BlueprintReadOnly)
    FOverlapAreaDelegate OnOverlapBeginCageWalls;
    
    UPROPERTY(BlueprintCallable, BlueprintReadOnly)
    FOverlapAreaDelegate OnOverlapEndCageWalls;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float BaseCampAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference AccessPointObjectRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference AccessPointMovableRangeRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference AccessPointInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference ChestObjectRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference ChestMovableRangeRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference ChestInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName ChestWorkableBoundsName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChestSlotNum;
    
public:
    APalBuildObjectPalStorage(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlaySpawnCharacterFX(APalCharacter* TargetActor) const;
    
private:
    UFUNCTION()
    void OnSpawnCharacter(FPalInstanceID IndividualId, int32 PhantomId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetWorkerSpawnLocalTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetFastTravelLocalTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetDisplayCharacterSpawnLocalTransform() const;
    
public:
    UFUNCTION(BlueprintPure)
    USceneComponent* GetChestObject();
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetChestMovableRange();
    
    UFUNCTION(BlueprintImplementableEvent)
    UShapeComponent* GetCageAreaShape() const;
    
    UFUNCTION(BlueprintPure)
    UStaticMeshComponent* GetAccessPointObject();
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetAccessPointMovableRange();
    
};

