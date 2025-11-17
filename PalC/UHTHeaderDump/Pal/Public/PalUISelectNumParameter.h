#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EPalUISelectNumResult.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUISelectNumChangedNumDelegateDelegate.h"
#include "PalUISelecteNumComplateDelegateDelegate.h"
#include "PalUISelectNumParameter.generated.h"

UCLASS(BlueprintType)
class UPalUISelectNumParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalUISelecteNumComplateDelegate complateCallBack;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalUISelectNumChangedNumDelegate changedNumCallBacl;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 MinNum;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 MaxNum;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 defaultNum;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector2D Position;
    
    UPalUISelectNumParameter();

    UFUNCTION(BlueprintCallable)
    void InvokeComplateCallback(EPalUISelectNumResult Result, int32 selectedNum);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangedNumCallback(int32 selectedNum);
    
};

