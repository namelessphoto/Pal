#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalDungeonExit.generated.h"

UCLASS()
class PAL_API APalDungeonExit : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bStartPoint;
    
public:
    APalDungeonExit(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION()
    void OnResponseDialogExitDungeon(const bool bResponse);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStartPoint() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetWarpPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

