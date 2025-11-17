#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkBootUp.generated.h"

UCLASS()
class PAL_API UPalWorkBootUp : public UPalWorkBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FReturnSelfMulticastDelegate OnBootUpInServerDelegate;
    
    UPalWorkBootUp();

};

