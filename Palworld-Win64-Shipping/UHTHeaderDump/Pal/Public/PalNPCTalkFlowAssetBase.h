#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Flow -ObjectName=FlowAsset -FallbackName=FlowAsset
#include "PalNPCTalkFlowAssetBase.generated.h"

UCLASS()
class PAL_API UPalNPCTalkFlowAssetBase : public UFlowAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFinishTalkFlow OnFinishTalkFlowDelegate;
    
private:
    UPROPERTY(EditAnywhere)
    int32 MaxTalkCount;
    
public:
    UPalNPCTalkFlowAssetBase();

};

