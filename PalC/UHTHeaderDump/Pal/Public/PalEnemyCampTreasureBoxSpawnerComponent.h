#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalEnemyCampTreasureBoxSpawnerComponent.generated.h"

class UPalEnemyCampTreasureBoxSpawnerComponent;
class UPalMapObjectModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalEnemyCampTreasureBoxSpawnerComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOpenTreasureBoxDelegate, UPalEnemyCampTreasureBoxSpawnerComponent*, SelfComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnOpenTreasureBoxDelegate OnOpenTreasureBoxDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(EditAnywhere)
    bool bLotteryByMultiTreasureBoxLotteryParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MultiTreasureBoxLotteryParameters;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SpawnedMapObjectInstanceId;
    
public:
    UPalEnemyCampTreasureBoxSpawnerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnDisposedSpawnedModel_ServerInternal(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FName GetCampSpawnerName() const;
    
};

