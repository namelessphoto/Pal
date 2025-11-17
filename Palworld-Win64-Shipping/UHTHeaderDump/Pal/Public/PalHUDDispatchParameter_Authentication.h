#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_MapObject.h"
#include "PalHUDDispatchParameter_Authentication.generated.h"

UCLASS()
class UPalHUDDispatchParameter_Authentication : public UPalHUDDispatchParameter_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsAuthentication;
    
    UPalHUDDispatchParameter_Authentication();

};

