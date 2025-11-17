#pragma once
#include "CoreMinimal.h"
#include "EPalSaveDataRestoreResultType.h"
#include "PalUIBackupSaveDisplayData.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldBackupSelect.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIWorldBackupSelect : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIWorldBackupSelect();

protected:
    UFUNCTION(BlueprintCallable)
    EPalSaveDataRestoreResultType RestoreSaveData(const FString& SelectedBackupDirectoryName);
    
    UFUNCTION(BlueprintPure)
    void GetBackupDisplayData(TArray<FPalUIBackupSaveDisplayData>& OutDisplayData);
    
};

