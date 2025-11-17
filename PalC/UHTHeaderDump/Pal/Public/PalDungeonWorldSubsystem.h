#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalDungeonDataLayerAssetSet.h"
#include "PalDungeonInfoParameter.h"
#include "PalDungeonMarkerPointData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalStageInstanceId.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonWorldSubsystem.generated.h"

class APalCapturedCage;
class APalDungeonPointMarker;
class UPalDungeonInstanceModel;

UCLASS(BlueprintType)
class PAL_API UPalDungeonWorldSubsystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalDungeonMarkerPointData> MarkerPointDataMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalDungeonInstanceModel*> InstanceModelMap;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DungeonMargin;
    
    UPROPERTY(EditDefaultsOnly)
    float TickInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FPalDungeonDataLayerAssetSet> DataLayerAssetMap;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalCapturedCage> RewardCageClass;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<APalDungeonPointMarker*> PointMarkersWaitSystemInitializeInServer;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bInitializedWithSaveData;
    
public:
    UPalDungeonWorldSubsystem();

    UFUNCTION(BlueprintPure)
    bool TryGetDungeonInfo(const FPalStageInstanceId& StageInstanceId, FPalDungeonInfoParameter& OutInfo) const;
    
    UFUNCTION(BlueprintPure)
    FGuid Debug_GetDungeonInstanceIdByIndex(const int32 Index) const;
    

    // Fix for true pure virtual functions not being implemented
};

