#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalMapObjectFarmCropData.generated.h"

class APalMapObjectFarmCrop;

USTRUCT(BlueprintType)
struct FPalMapObjectFarmCropData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CropBlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalMapObjectFarmCrop> CropClassPath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CropItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrowupTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CropItemNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SeedingWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WateringWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HarvestWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MaterialItem1_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaterialItem1_Num;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MaterialItem2_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaterialItem2_Num;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Editor_RowNameHash;
    
    PAL_API FPalMapObjectFarmCropData();
};

