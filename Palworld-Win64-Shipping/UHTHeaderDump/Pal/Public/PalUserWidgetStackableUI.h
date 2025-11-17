#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetHierarchical.h"
#include "PalUserWidgetStackableUI.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class UPalUserWidgetStackableUI : public UPalUserWidgetHierarchical {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* OpenAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* CloseAkEvent;
    
public:
    UPalUserWidgetStackableUI();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnPreClose();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostClose();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnClose();
    
public:
    UFUNCTION(BlueprintPure)
    UAkAudioEvent* GetOpenAkEvent() const;
    
    UFUNCTION(BlueprintPure)
    UAkAudioEvent* GetCloseAkEvent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

