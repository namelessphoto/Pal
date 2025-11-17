#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FlowAssetSaveData.h"
#include "Templates/SubclassOf.h"
#include "FlowAsset.generated.h"

class AActor;
class UFlowAsset;
class UFlowNode;
class UFlowNode_CustomInput;

UCLASS(Blueprintable)
class FLOW_API UFlowAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid AssetGuid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bWorldBound;
    
private:
    UPROPERTY()
    TMap<FGuid, UFlowNode*> Nodes;
    
    UPROPERTY(Transient)
    TArray<UFlowAsset*> ActiveInstances;
    
protected:
    UPROPERTY()
    UFlowAsset* TemplateAsset;
    
    UPROPERTY()
    TSet<UFlowNode_CustomInput*> CustomInputNodes;
    
    UPROPERTY()
    TSet<UFlowNode*> PreloadedNodes;
    
    UPROPERTY()
    TArray<UFlowNode*> ActiveNodes;
    
    UPROPERTY()
    TArray<UFlowNode*> RecordedNodes;
    
    UPROPERTY(EditAnywhere)
    UClass* ExpectedOwnerClass;
    
public:
    UFlowAsset();

    UFUNCTION(BlueprintPure)
    AActor* TryFindActorOwner() const;
    
    UFUNCTION(BlueprintCallable)
    FFlowAssetSaveData SaveInstance(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSave();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadInstance(const FFlowAssetSaveData& AssetRecord);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsBoundToWorld();
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFlowNode*> GetRecordedNodes() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFlowNode*> GetNodesInExecutionOrder(UFlowNode* FirstIteratedNode, const TSubclassOf<UFlowNode> FlowNodeClass);
    
    UFUNCTION(BlueprintPure)
    UFlowNode* GetDefaultEntryNode() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFlowNode*> GetActiveNodes() const;
    
};

