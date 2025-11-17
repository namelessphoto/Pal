#pragma once
#include "CoreMinimal.h"
#include "RootViewportLayoutInfo.generated.h"

class ULocalPlayer;
class UPrimaryGameLayout;

USTRUCT(BlueprintType)
struct FRootViewportLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ULocalPlayer* LocalPlayer;
    
    UPROPERTY(Instanced, Transient)
    UPrimaryGameLayout* RootLayout;
    
    UPROPERTY(Transient)
    bool bAddedToViewport;
    
    COMMONGAME_API FRootViewportLayoutInfo();
};

