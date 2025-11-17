#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FloatCounter.h"
#include "Templates/SubclassOf.h"
#include "PalStationaryLauncherBase.generated.h"

UCLASS(Abstract)
class PAL_API APalStationaryLauncherBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bCanTickInNotLaunchLoop;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TSubclassOf<AActor> LaunchObjectClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 LaunchedCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 LaunchLoopNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter LaunchLoopTimeCounter;
    
public:
    APalStationaryLauncherBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintNativeEvent)
    void StartLaunchAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLaunchObjectClass_ServerInternal(TSubclassOf<AActor> InLaunchObjectClass);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedLaunchObject(AActor* SpawnedLaunchObject);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetLaunchObjectSpawnTransform(FVector& OutLocation, FRotator& OutRotator);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastLaunch_Multicast();
    
};

