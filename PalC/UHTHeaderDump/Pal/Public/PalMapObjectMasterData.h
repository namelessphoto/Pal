#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalMapObjectMaterialSubType.h"
#include "EPalMapObjectMaterialType.h"
#include "PalMapObjectMasterData.generated.h"

class APalMapObject;

USTRUCT(BlueprintType)
struct PAL_API FPalMapObjectMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideNameMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalMapObject> BlueprintClassSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectMaterialType MaterialType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectMaterialSubType MaterialSubType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCollectionObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Hp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBelongToBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DistributeExpAroundPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeteriorationDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExtinguishBurnWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowHPGauge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInDevelop;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Editor_RowNameHash;
    
    FPalMapObjectMasterData();
};

