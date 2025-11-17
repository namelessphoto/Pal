#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavDataGatheringModeConfig -FallbackName=ENavDataGatheringModeConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavigationQueryResult -FallbackName=ENavigationQueryResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FNavigationSystemRunMode -FallbackName=FNavigationSystemRunMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentSelector -FallbackName=NavAgentSelector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavDataConfig -FallbackName=NavDataConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSystemBase -FallbackName=NavigationSystemBase
#include "OnNavDataGenericEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "NavigationSystemV1.generated.h"

class AActor;
class AController;
class ANavMeshBoundsVolume;
class ANavigationData;
class UCrowdManagerBase;
class UNavArea;
class UNavigationPath;
class UNavigationQueryFilter;
class UNavigationSystemV1;
class UObject;

UCLASS(BlueprintType, NonTransient, Within=World)
class NAVIGATIONSYSTEM_API UNavigationSystemV1 : public UNavigationSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ANavigationData* MainNavData;
    
    UPROPERTY(Transient)
    ANavigationData* AbstractNavData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName DefaultAgentName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAutoCreateNavigationData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSpawnNavDataInNavBoundsLevel: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAllowClientSideNavigation: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bShouldDiscardSubLevelNavData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bTickWhilePaused: 1;
    
    UPROPERTY()
    uint8 bSupportRebuilding: 1;
    
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bInitialBuildingLocked: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSkipAgentHeightCheckWhenPickingNavData: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 GeometryExportVertexCountWarningThreshold;
    
protected:
    UPROPERTY(Config, EditDefaultsOnly)
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float ActiveTilesUpdateInterval;
    
    UPROPERTY(Config, EditDefaultsOnly)
    ENavDataGatheringModeConfig DataGatheringMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float DirtyAreaWarningSizeThreshold;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float GatheringNavModifiersWarningLimitTime;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNavDataConfig> SupportedAgents;
    
    UPROPERTY(Config, EditAnywhere)
    FNavAgentSelector SupportedAgentsMask;
    
public:
    UPROPERTY(Transient)
    FBox BuildBounds;
    
    UPROPERTY(Transient)
    TArray<ANavigationData*> NavDataSet;
    
    UPROPERTY(Transient)
    TArray<ANavigationData*> NavDataRegistrationQueue;
    
    UPROPERTY(Transient)
    FOnNavDataGenericEvent OnNavDataRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnNavDataGenericEvent OnNavigationGenerationFinishedDelegate;
    
protected:
    UPROPERTY()
    FNavigationSystemRunMode OperationMode;
    
public:
    UNavigationSystemV1();

    UFUNCTION(BlueprintCallable)
    void UnregisterNavigationInvoker(AActor* Invoker);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxSimultaneousTileGenerationJobsCount();
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    
    UFUNCTION(BlueprintCallable)
    bool K2_ReplaceAreaInOctreeData(const UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNavigationBeingBuilt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ENavigationQueryResult> GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ENavigationQueryResult> GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
};

