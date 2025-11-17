#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalWorldHUDParameter.h"
#include "PalWorldHUDDisplayInfo.generated.h"

UCLASS(BlueprintType)
class UPalWorldHUDDisplayInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalWorldHUDParameter Parameter;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bDisposeFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid WidgetId;
    
    UPalWorldHUDDisplayInfo();

};

