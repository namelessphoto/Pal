#pragma once
#include "CoreMinimal.h"
#include "PalOtomoLoadoutData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIOtomoLoadoutBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIOtomoLoadoutBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FPalOtomoLoadoutData> CurrentLoadoutData;
    
public:
    UPalUIOtomoLoadoutBase();

    UFUNCTION(BlueprintCallable)
    void RequestApplyLoadoutData(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetLocalPlayerOtomoLoadout(TArray<FPalOtomoLoadoutData>& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePresetData(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLoadoutPresetName(const FString& NewName, int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeLoadoutPresetData(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AddCurrentOtomoLoadoutData();
    
};

