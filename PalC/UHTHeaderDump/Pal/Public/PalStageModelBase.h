#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStageInstanceId.h"
#include "PalStagePlayerInfo.h"
#include "PalStageModelBase.generated.h"

class UPalStageModelBase;

UCLASS(Abstract, BlueprintType)
class PAL_API UPalStageModelBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FPalStageInstanceId InstanceId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    TArray<FPalStagePlayerInfo> PlayerInfos;
    
public:
    UPalStageModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnCompleteLoadStage_ServerInternal(UPalStageModelBase* TargetStageModel);
    
};

