#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalEnergyType.h"
#include "PalItemRecipe.generated.h"

USTRUCT(BlueprintType)
struct FPalItemRecipe : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Product_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Product_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkableAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName UnlockItemID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material1_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material1_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material2_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material2_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material3_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material3_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material4_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material4_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material5_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material5_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalEnergyType EnergyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EnergyAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CraftExpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Editor_RowNameHash;
    
    PAL_API FPalItemRecipe();
};

