#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalSupplyType.h"
#include "PalSupplyDropActor.generated.h"

class APalMapObject;
class UPalMapObjectModel;

UCLASS()
class PAL_API APalSupplyDropActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 KnockBackMaxPower;
    
    UPROPERTY(EditAnywhere)
    float LandHitDamageRate;
    
    UPROPERTY(Replicated, Transient)
    FVector TargetLocation;
    
    UPROPERTY(Replicated, Transient)
    FVector Velocity;
    
    UPROPERTY(Replicated, Transient)
    EPalSupplyType SupplyType;
    
    UPROPERTY(Replicated, Transient)
    FTimespan TotalFallTime;
    
    UPROPERTY(Transient)
    FGuid SpawnerID;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MapObjectID)
    FGuid MapObjectId;
    
public:
    APalSupplyDropActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnReplicateMapObjectModel(UPalMapObjectModel* MapObjectModel);
    
protected:
    UFUNCTION()
    void OnRep_MapObjectID();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLanded_BP();
    
public:
    UFUNCTION()
    void OnCreateMapObject(APalMapObject* MapObject);
    
};

