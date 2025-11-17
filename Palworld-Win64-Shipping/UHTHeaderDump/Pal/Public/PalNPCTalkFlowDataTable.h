#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNPCTalkFlowDataTable.generated.h"

class UPalNPCTalkFlowAssetBase;

USTRUCT(BlueprintType)
struct FPalNPCTalkFlowDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UPalNPCTalkFlowAssetBase> SoftTalkFlowAsset;
    
    PAL_API FPalNPCTalkFlowDataTable();
};

