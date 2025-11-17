#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshBuildSettings -FallbackName=MeshBuildSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EHoudiniAssetState.h"
#include "EHoudiniAssetStateResult.h"
#include "EHoudiniBakeAfterNextCook.h"
#include "HoudiniAssetStateEvents.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniStaticMeshGenerationProperties.h"
#include "HoudiniAssetComponent.generated.h"

class AActor;
class UHoudiniAsset;
class UHoudiniAssetComponent;
class UHoudiniHandleComponent;
class UHoudiniInput;
class UHoudiniOutput;
class UHoudiniPDGAssetLink;
class UHoudiniParameter;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetComponent : public UPrimitiveComponent, public IHoudiniAssetStateEvents {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHoudiniAsset* HoudiniAsset;
    
    UPROPERTY()
    bool bCookOnParameterChange;
    
    UPROPERTY()
    bool bUploadTransformsToHoudiniEngine;
    
    UPROPERTY()
    bool bCookOnTransformChange;
    
    UPROPERTY()
    bool bCookOnAssetInputCook;
    
    UPROPERTY()
    bool bOutputless;
    
    UPROPERTY()
    bool bOutputTemplateGeos;
    
    UPROPERTY()
    bool bUseOutputNodes;
    
    UPROPERTY()
    FDirectoryPath TemporaryCookFolder;
    
    UPROPERTY()
    FDirectoryPath BakeFolder;
    
    UPROPERTY(EditAnywhere)
    bool bUseDeprecatedRawMeshSupport;
    
    UPROPERTY(EditAnywhere)
    bool bSplitMeshSupport;
    
    UPROPERTY(EditAnywhere)
    FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;
    
    UPROPERTY(EditAnywhere)
    FMeshBuildSettings StaticMeshBuildSettings;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideGlobalProxyStaticMeshSettings;
    
    UPROPERTY(EditAnywhere)
    bool bEnableProxyStaticMeshOverride;
    
    UPROPERTY(EditAnywhere)
    bool bEnableProxyStaticMeshRefinementByTimerOverride;
    
    UPROPERTY(EditAnywhere)
    float ProxyMeshAutoRefineTimeoutSecondsOverride;
    
    UPROPERTY(EditAnywhere)
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
    
    UPROPERTY(EditAnywhere)
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
    
protected:
    UPROPERTY(DuplicateTransient)
    int32 AssetId;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<int32> NodeIdsToCook;
    
    UPROPERTY(DuplicateTransient, Transient)
    TMap<int32, int32> OutputNodeCookCounts;
    
    UPROPERTY(DuplicateTransient, Export)
    TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;
    
    UPROPERTY(DuplicateTransient)
    FGuid ComponentGUID;
    
    UPROPERTY(DuplicateTransient)
    FGuid HapiGUID;
    
    UPROPERTY(DuplicateTransient)
    FString HapiAssetName;
    
    UPROPERTY(DuplicateTransient)
    EHoudiniAssetState AssetState;
    
    UPROPERTY(DuplicateTransient)
    EHoudiniAssetState DebugLastAssetState;
    
    UPROPERTY(DuplicateTransient)
    EHoudiniAssetStateResult AssetStateResult;
    
    UPROPERTY(DuplicateTransient)
    FTransform LastComponentTransform;
    
    UPROPERTY()
    uint32 SubAssetIndex;
    
    UPROPERTY(DuplicateTransient)
    int32 AssetCookCount;
    
    UPROPERTY(DuplicateTransient)
    bool bHasBeenLoaded;
    
    UPROPERTY(DuplicateTransient)
    bool bHasBeenDuplicated;
    
    UPROPERTY(DuplicateTransient)
    bool bPendingDelete;
    
    UPROPERTY(DuplicateTransient)
    bool bRecookRequested;
    
    UPROPERTY(DuplicateTransient)
    bool bRebuildRequested;
    
    UPROPERTY(DuplicateTransient)
    bool bEnableCooking;
    
    UPROPERTY(DuplicateTransient)
    bool bForceNeedUpdate;
    
    UPROPERTY(DuplicateTransient)
    bool bLastCookSuccess;
    
    UPROPERTY(DuplicateTransient)
    bool bParameterDefinitionUpdateNeeded;
    
    UPROPERTY(DuplicateTransient)
    bool bBlueprintStructureModified;
    
    UPROPERTY(DuplicateTransient)
    bool bBlueprintModified;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniParameter*> Parameters;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniInput*> Inputs;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniOutput*> Outputs;
    
    UPROPERTY()
    TArray<FHoudiniBakedOutput> BakedOutputs;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;
    
    UPROPERTY(Instanced)
    TArray<UHoudiniHandleComponent*> HandleComponents;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasComponentTransformChanged;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bFullyLoaded;
    
    UPROPERTY()
    UHoudiniPDGAssetLink* PDGAssetLink;
    
    UPROPERTY()
    FTimerHandle RefineMeshesTimer;
    
    UPROPERTY(DuplicateTransient)
    bool bNoProxyMeshNextCookRequested;
    
    UPROPERTY(DuplicateTransient)
    bool bBakeAfterNextCook;
    
    UPROPERTY(DuplicateTransient)
    EHoudiniBakeAfterNextCook BakeAfterNextCook;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bCachedIsPreview;
    
    UPROPERTY(Transient)
    double LastTickTime;
    
public:
    UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

