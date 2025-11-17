#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HelpGuide.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_HelpGuide : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName SelectGuideID;
    
    UPalHUDDispatchParameter_HelpGuide();

};

