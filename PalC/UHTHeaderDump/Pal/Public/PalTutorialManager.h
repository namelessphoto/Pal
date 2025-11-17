#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EPalTutorialTriggerConditionType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalUIPalCaptureInfo.h"
#include "PalWorldSubsystem.h"
#include "PalTutorialManager.generated.h"

class UDataTable;
class UPalTutorialTriggerBase;

UCLASS(BlueprintType)
class UPalTutorialManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialTriggerDelegate, FDataTableRowHandle, TutorialMsg);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTutorialTriggerDelegate OnTutorialTriggered;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UPalTutorialTriggerBase*> TutorialTriggers;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MsgDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* TutorialTriggersDataTable;
    
public:
    UPalTutorialManager();

    UFUNCTION(BlueprintCallable)
    void TutorialTrigger_Common(EPalTutorialTriggerConditionType TriggerType);
    
    UFUNCTION(BlueprintCallable)
    void TutorialTrigger_Capture(FPalUIPalCaptureInfo CaptureInfo, bool CaptureSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

