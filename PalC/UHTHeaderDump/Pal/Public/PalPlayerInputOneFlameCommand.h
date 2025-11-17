#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPlayerInputButtonType.h"
#include "PalPlayerInputOneFlameCommand.generated.h"

UCLASS()
class PAL_API UPalPlayerInputOneFlameCommand : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EPalPlayerInputButtonType CurrentState;
    
public:
    UPalPlayerInputOneFlameCommand();

private:
    UFUNCTION()
    void OnRelease();
    
    UFUNCTION()
    void OnPress();
    
};

