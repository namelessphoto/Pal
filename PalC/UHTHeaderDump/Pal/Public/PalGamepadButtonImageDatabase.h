#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PalGamepadButtonImageDatabase.generated.h"

class UDataTable;
class UObject;
class UTexture2D;

UCLASS(BlueprintType)
class UPalGamepadButtonImageDatabase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* GamepadButtonImageDataTable;
    
public:
    UPalGamepadButtonImageDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetBrussBySlateBrush(const UObject* WorldContextObject, FSlateBrush SlateBrush, FSlateBrush& OutData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetBrussByImage(const UObject* WorldContextObject, UTexture2D* Image, FSlateBrush& OutData);
    
};

