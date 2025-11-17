#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoSaveDataUtility.generated.h"

UCLASS(BlueprintType)
class UPalWorldBaseInfoSaveDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorldBaseInfoSaveDataUtility();

    UFUNCTION(BlueprintPure)
    static FString GetWorldName(const FPalWorldBaseInfoSaveData& SaveData);
    
};

