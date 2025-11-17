#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=AsyncHTTPRequestFunction__DelegateSignature -FallbackName=AsyncHTTPRequestFunctionDelegate
#include "EPalACEWordFilterSceneType.h"
#include "PalACEWordFilterRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalACEWordFilterRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString TargetString;
    
    UPROPERTY(BlueprintReadWrite)
    EPalACEWordFilterSceneType SceneType;
    
    UPROPERTY()
    FAsyncHTTPRequestFunction Callback;
    
    PAL_API FPalACEWordFilterRequestData();
};

