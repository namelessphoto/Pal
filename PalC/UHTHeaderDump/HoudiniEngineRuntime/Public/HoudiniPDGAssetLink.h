#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AggregatedWorkItemTally.h"
#include "EPDGLinkState.h"
#include "HoudiniPDGAssetLink.generated.h"

class AActor;
class UTOPNetwork;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetName;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetNodePath;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    int32 AssetId;
    
    UPROPERTY()
    TArray<UTOPNetwork*> AllTOPNetworks;
    
    UPROPERTY()
    int32 SelectedTOPNetworkIndex;
    
    UPROPERTY(NonTransactional, Transient)
    EPDGLinkState LinkState;
    
    UPROPERTY()
    bool bAutoCook;
    
    UPROPERTY()
    bool bUseTOPNodeFilter;
    
    UPROPERTY()
    bool bUseTOPOutputFilter;
    
    UPROPERTY()
    FString TOPNodeFilter;
    
    UPROPERTY()
    FString TOPOutputFilter;
    
    UPROPERTY(NonTransactional)
    int32 NumWorkItems;
    
    UPROPERTY(NonTransactional, Transient)
    FAggregatedWorkItemTally WorkItemTally;
    
    UPROPERTY()
    FString OutputCachePath;
    
    UPROPERTY(Transient)
    bool bNeedsUIRefresh;
    
    UPROPERTY(EditAnywhere)
    AActor* OutputParentActor;
    
    UPROPERTY()
    FDirectoryPath BakeFolder;
    
private:
    UPROPERTY()
    int32 NumAttemptedNodeAutoBakes;
    
    UPROPERTY()
    int32 NumSuccessfulNodeAutoBakes;
    
public:
    UHoudiniPDGAssetLink();

};

