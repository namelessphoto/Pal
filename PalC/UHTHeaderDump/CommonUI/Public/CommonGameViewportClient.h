#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "CommonGameViewportClient.generated.h"

UCLASS(NonTransient)
class COMMONUI_API UCommonGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UCommonGameViewportClient();

};

