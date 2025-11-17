#pragma once
#include "CoreMinimal.h"
#include "EPalLogWidgetState.h"
#include "PalLogAdditionalData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUserWidget.h"
#include "PalLogWidgetBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalLogWidgetBase : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float destroyTime;
    
    UPROPERTY(BlueprintReadWrite)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogWidgetState logState;
    
    UPROPERTY(BlueprintReadWrite)
    FPalStaticItemIdAndNum ItemIDAndNum;
    
public:
    UPalLogWidgetBase();

    UFUNCTION(BlueprintCallable)
    void StartDisplayLog(float inDestroyTime);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EPalLogWidgetState ChangeState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLogText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalData(const FPalLogAdditionalData& inAdditionalData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestInAnime();
    
};

