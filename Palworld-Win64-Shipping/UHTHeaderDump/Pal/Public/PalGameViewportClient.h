#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonGameViewportClient -FallbackName=CommonGameViewportClient
#include "PalGameViewportClient.generated.h"

UCLASS(NonTransient)
class UPalGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UPalGameViewportClient();

};

