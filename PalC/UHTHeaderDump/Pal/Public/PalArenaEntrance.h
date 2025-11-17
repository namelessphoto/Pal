#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalArenaEntranceInfo.h"
#include "PalArenaSpectateRoomInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalArenaEntrance.generated.h"

class APalPlayerCharacter;
class UPalArenaSpectateRoomInfoObject;

UCLASS()
class PAL_API APalArenaEntrance : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_EntranceInfo)
    FPalArenaEntranceInfo EntranceInfo;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalArenaSpectateRoomInfoObject* SpectateRoomInfoObject;
    
public:
    APalArenaEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestEnterSpectate(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterPvP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenArenaGuide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnRep_EntranceInfo();
    
    UFUNCTION(BlueprintPure)
    bool IsEntryPlayer(APalPlayerCharacter* PlayerCharacter) const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetWarpPoint() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPalArenaSpectateRoomInfo> GetSpectateInfo() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetItemDropPoint() const;
    
    UFUNCTION(BlueprintPure)
    FPalArenaEntranceInfo GetEntranceInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

