#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Flow -ObjectName=FlowNode -FallbackName=FlowNode
#include "PalNetworkNPCTalkRequestData.h"
#include "PalFlowNode_NPCTalkBase.generated.h"

class APalCharacter;
class UObject;
class UPalNPCTalkSystem;

UCLASS(Abstract)
class PAL_API UPalFlowNode_NPCTalkBase : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName NetworkInvokeName;
    
    UPROPERTY(EditAnywhere)
    bool bSaveNetworkInvoke;
    
    UPROPERTY(EditAnywhere)
    bool bInvokeWhenAlreadySaved;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> WeakWorldContextObject;
    
public:
    UPalFlowNode_NPCTalkBase();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestInvokeInServer();
    
public:
    UFUNCTION(BlueprintPure)
    FPalNetworkNPCTalkRequestData MakeNetworkRequestData() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetTalker() const;
    
    UFUNCTION(BlueprintPure)
    UPalNPCTalkSystem* GetNPCTalkSystem() const;
    
    UFUNCTION(BlueprintPure)
    FName GetNetworkInvokeName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentTalkCount() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FName BP_InvokePalNPCNetworkRequestInServer(const UObject* WorldContextObject, const FGuid& PlayerUId, const FPalNetworkNPCTalkRequestData& RequestData);
    
};

