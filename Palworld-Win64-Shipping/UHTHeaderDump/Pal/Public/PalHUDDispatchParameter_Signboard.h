#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameter_MapObject.h"
#include "PalHUDDispatchParameter_Signboard.generated.h"

UCLASS()
class UPalHUDDispatchParameter_Signboard : public UPalHUDDispatchParameter_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString InText;
    
    UPROPERTY(BlueprintReadWrite)
    FString OutText;
    
    UPROPERTY(BlueprintCallable)
    FUpdateTextDelegate OnUpdateTextDelegate;
    
    UPalHUDDispatchParameter_Signboard();

};

