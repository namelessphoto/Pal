#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "BuildingSurfaceMaterialSet.h"
#include "EPalMapObjectChangeMeshFXType.h"
#include "EPalMapObjectDestroyFXType.h"
#include "EPalMapObjectTreasureSpecialType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalMapObjectDamageInfo.h"
#include "PalMapObjectInfoTickInBackground.h"
#include "PalMapObjectModelStaticData.h"
#include "PalMapObjectSignificanceInfo.h"
#include "PalMapObjectStaticData.h"
#include "PalMapObjectTreasureBoxOpenRequiredItemMapByGrade.h"
#include "PalMapObjectVisualEffectAssets.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectManager.generated.h"

class APalFoliageModelChunk;
class APalMapObject;
class APalMapObjectSpawnerBase;
class APalSnapModeFX;
class APalTestMapObjectRegistrationToManager;
class IPalBuildObjectSpawnValidationCheckInterface;
class UPalBuildObjectSpawnValidationCheckInterface;
class IPalMapObjectModelInterface;
class UPalMapObjectModelInterface;
class UAkAudioEvent;
class UDataTable;
class UNiagaraSystem;
class UObject;
class UPalBuildOperator;
class UPalDialogParameterBase;
class UPalFoliagePresetDataSet;
class UPalHitEffectSlot;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectFoliage;
class UPalMapObjectModel;
class UPalMapObjectModelInitializeExtraParameterSpawnedBy;
class UPalMapObjectSpawnRequestHandler;
class UPalMapObjectWorldDisposer;
class UPointLightComponent;

UCLASS(BlueprintType, Config=Game)
class UPalMapObjectManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapObjectModelWithVectorDelegate, UPalMapObjectModel*, MapObjectModel, const FVector&, Vector);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapObjectModelSpawnedByDelegate, UPalMapObjectModel*, MapObjectModel, UPalMapObjectModelInitializeExtraParameterSpawnedBy*, SpawnedBy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelInterfaceDelegate, TScriptInterface<IPalMapObjectModelInterface>, MapObjectModel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelDynamicDelegate, UPalMapObjectModel*, MapObjectModel);
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelWithVectorDelegate OnCreateMapObjectModelInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDynamicDelegate OnRepMapObjectModelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelSpawnedByDelegate OnSpawnedMapObjectModelByInServerDelegate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<TScriptInterface<IPalBuildObjectSpawnValidationCheckInterface>> BuildSpawnValidationCheckers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BuildObjectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BuildObjectNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BuildObjectDescTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MapObjectAssignTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* MapObjectDataTableForEnemyCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBuildingSurfaceMaterialSet BuildingSurfaceMaterialSet;
    
    UPROPERTY(EditDefaultsOnly)
    UPalFoliagePresetDataSet* FoliagePresetDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalFoliageModelChunk> FoliageModelChunkClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FoliageGridSize;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFoliage* Foliage;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalBuildOperator* BuildOperator;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectWorldDisposer* WorldDisposerForServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalMapObjectModel*> MapObjectModelMapForServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalMapObjectConcreteModelBase*> MapObjectConcreteModelMapForServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, FPalMapObjectModelStaticData> MapObjectModelStaticDataCacheMap;
    
    UPROPERTY(EditDefaultsOnly)
    FPalMapObjectStaticData StaticData;
    
    UPROPERTY(EditDefaultsOnly)
    FName BuildObjectId_PalStorage;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<EObjectTypeQuery>> SearchObjectTypes;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalMapObjectSignificanceInfo> SignificanceInfoList;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectDestroyFXType, UNiagaraSystem*> DestroyEffectMap;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectDestroyFXUserParamName_BoxSize;
    
    UPROPERTY(EditDefaultsOnly)
    FName MapObjectDestroyFXUserParamName_BoxSurfaceArea;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* BuildStartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* BuildCompleteEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName BuildFXUserParamName_BoxCenter;
    
    UPROPERTY(EditDefaultsOnly)
    FName BuildFXUserParamName_BoxSize;
    
    UPROPERTY(EditDefaultsOnly)
    FName BuildFXUserParamName_BoxSurfaceArea;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* BuildCompleteSE;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* RepairEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* DamageEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_Alpha;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_Rate;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_Scale;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_RadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_AddRate;
    
    UPROPERTY(EditDefaultsOnly)
    FName DamageFXUserParamName_EndAlpha;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageParam_MaxRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageParam_MaxAddRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageParam_MaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageParam_MaxRadiusScale;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageParam_RadiusScaleMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageFX_StartHPRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageFX_DefaultBoundsSphereRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DamageFX_SpanwLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageFX_EndFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DropItemSpawnLocationFromActorBounds;
    
    UPROPERTY(EditDefaultsOnly)
    float DropItemSpawnDirectionZ;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FoliageDropItemSpawnOffset;
    
    UPROPERTY(EditAnywhere)
    FVector DropItemReleaseDirectionRelative;
    
    UPROPERTY(EditDefaultsOnly)
    FVector FoliageDestroyFXExtentsDefault;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalHitEffectSlot> HitEffectSlotClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectChangeMeshFXType, UNiagaraSystem*> ChangeMeshEffectMap;
    
    UPROPERTY(EditDefaultsOnly)
    FPalMapObjectVisualEffectAssets VisualEffectAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectTreasureSpecialType, FPalDataTableRowName_ItemData> TreasureBoxOpenRequiredItemMapForSpecialType;
    
    UPROPERTY(EditDefaultsOnly)
    FPalMapObjectTreasureBoxOpenRequiredItemMapByGrade TreasureBoxOpenRequiredItemMapByGrade;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectTreasureSpecialType, FPalMapObjectTreasureBoxOpenRequiredItemMapByGrade> TreasureBoxOpenRequiredItemMapByGradeBySpecialType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalSnapModeFX> SnapModeFXClass;
    
private:
    UPROPERTY(Transient)
    TMap<FGuid, UPalMapObjectModel*> MapObjectModelHandlingMap;
    
    UPROPERTY()
    TArray<APalMapObject*> LevelMapObjectsToRegister;
    
    UPROPERTY()
    APalTestMapObjectRegistrationToManager* Registrator;
    
    UPROPERTY(Transient)
    TMap<FGuid, UPalMapObjectSpawnRequestHandler*> SpawnRequestHandlerMap;
    
    UPROPERTY(Transient)
    int32 InDoorCheckProcessIndex_AnyThread;
    
    UPROPERTY(Config)
    int32 InDoorCheckMaxNumPerFrame_AnyThread;
    
    UPROPERTY(Config)
    int32 MapObjectSignificanceUpdateDivideNum;
    
    UPROPERTY(Transient)
    TSet<APalMapObjectSpawnerBase*> SpawnedSpawners;
    
    UPROPERTY(Config)
    int32 MaxDelayedSpawnCallbacksPerFrame;
    
    UPROPERTY(Transient)
    TMap<FGuid, FPalMapObjectInfoTickInBackground> MapObjectInfoMapTickInBackground;
    
    UPROPERTY(Transient)
    TArray<FPalMapObjectDamageInfo> MapObjectDamageInfoStack;
    
    UPROPERTY(Transient)
    APalSnapModeFX* SnapModeFX;
    
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<TWeakObjectPtr<UObject>> SkeletalLODComponentArrayExec;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<TWeakObjectPtr<UObject>> SkeletalLODComponentArrayWait;
    
    UPROPERTY(Export, Transient, VisibleInstanceOnly)
    TArray<TWeakObjectPtr<UPointLightComponent>> PointLightComponents;
    
    UPalMapObjectManager();

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshComponentForLOD(int32 InExecuteCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePointLightComponentForCulling();
    
    UFUNCTION()
    void UnResisterSkeletalMeshComponentForLOD(UObject* InComponent);
    
    UFUNCTION()
    void UnResisterPointLightComponent(UPointLightComponent* InComponent);
    
    UFUNCTION()
    void ResisterSkeletalMeshComponentForLOD(UObject* InComponent);
    
    UFUNCTION()
    void ResisterPointLightComponent(UPointLightComponent* InComponent);
    
    UFUNCTION()
    void RequestDismantleObject_OnResponseDialog(const bool bResult, UPalDialogParameterBase* DialogParameter);
    
    UFUNCTION()
    void RecalcPointLightOverlap();
    
    UFUNCTION(BlueprintCallable)
    void PlayMapObjectDestroyFX(const FVector& Location, const FBoxSphereBounds& Bounds, const EPalMapObjectDestroyFXType Type);
    
    UFUNCTION()
    UPalMapObjectFoliage* GetFoliage() const;
    
    UFUNCTION(BlueprintPure)
    UPalBuildOperator* GetBuildOperator() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectModel* FindModel(const FGuid& InstanceId) const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectConcreteModelBase* FindConcreteModel(const FGuid& InstanceId) const;
    

    // Fix for true pure virtual functions not being implemented
};

