#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Templates/SubclassOf.h"
#include "PalTimerGaugeWidgetCreateInfo.generated.h"

class AActor;
class UPalUserWidgetTimerGaugeBase;

USTRUCT(BlueprintType)
struct FPalTimerGaugeWidgetCreateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPalUserWidgetTimerGaugeBase> timerGaugeWidgetClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector DisplayOffset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DisplayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialStartDelayVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHide;
    
    PAL_API FPalTimerGaugeWidgetCreateInfo();
};

