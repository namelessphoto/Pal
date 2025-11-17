#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDebugItemCreateInfo.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalGameProgressPresetDataTableRow.generated.h"

USTRUCT()
struct FPalGameProgressPresetDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 HPLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SPLevel;
    
    UPROPERTY(EditAnywhere)
    int32 AttackLevel;
    
    UPROPERTY(EditAnywhere)
    int32 WorkLevel;
    
    UPROPERTY(EditAnywhere)
    int32 WeightLevel;
    
    UPROPERTY(EditAnywhere)
    int32 CaptureLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDebugOtomoPalInfo> OtomoPals;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDebugOtomoPalInfo> CapturedPals;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDebugItemCreateInfo> LoadoutItems;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDebugItemCreateInfo> Items;
    
    PAL_API FPalGameProgressPresetDataTableRow();
};

