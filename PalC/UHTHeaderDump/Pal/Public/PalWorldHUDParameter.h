#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalWorldHUDWidgetBlueprintType.h"
#include "Templates/SubclassOf.h"
#include "PalWorldHUDParameter.generated.h"

class AActor;
class UPalHUDDispatchParameterBase;
class UPalUserWidgetWorldHUD;

USTRUCT(BlueprintType)
struct FPalWorldHUDParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector TargetLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSubclassOf<UPalUserWidgetWorldHUD> WorldHUDClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorldHUDWidgetBlueprintType WorldHUDType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalHUDDispatchParameterBase* HUDParameter;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector DisplayOffset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector DisplayOffsetScreenPos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DisplayRange;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bEnableShow;
    
public:
    PAL_API FPalWorldHUDParameter();
};

