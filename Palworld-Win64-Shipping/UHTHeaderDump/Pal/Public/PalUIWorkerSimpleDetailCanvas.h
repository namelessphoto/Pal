#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIWorkerSimpleDetailCanvas.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(EditInlineNew)
class PAL_API UPalUIWorkerSimpleDetailCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIWorkerSimpleDetailCanvas();

protected:
    UFUNCTION()
    void UnbindWorkerEvent(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnbindBaseCampEvent(UPalBaseCampModel* targetCampModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestOpenDetail(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestCloseDetail();
    
    UFUNCTION()
    void OnEndInteractWorker(AActor* Actor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
    UFUNCTION()
    void OnBeginInteractWorker(AActor* Actor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject);
    
    UFUNCTION()
    void OnAddedNewWorker(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel();
    
    UFUNCTION()
    void BindWorkerEvent(UPalIndividualCharacterHandle* workerHandle);
    
    UFUNCTION(BlueprintCallable)
    void BindBaseCampEvent(UPalBaseCampModel* targetCampModel);
    
};

