#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMapObjectFarmCropData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalMapObjectFarmCropDataUtility.generated.h"

UCLASS(BlueprintType)
class UPalMapObjectFarmCropDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectFarmCropDataUtility();

    UFUNCTION(BlueprintPure)
    static void MaterialInfos(const FPalMapObjectFarmCropData& Data, TArray<FPalStaticItemIdAndNum>& NewMaterialInfos);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(FPalMapObjectFarmCropData& Data);
    
};

