#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalInteractiveObjectButtonType.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectActionInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalInteractiveObjectIndicatorType IndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalInteractiveObjectButtonType buttonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float longPushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalActionType ActionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLockRiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isInputComsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanToggle;
    
    PAL_API FPalInteractiveObjectActionInfoData();
};

