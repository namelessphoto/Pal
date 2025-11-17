#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CompositingParamPayload.generated.h"

class UTexture;

USTRUCT()
struct COMPOSURE_API FCompositingParamPayload {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, float> ScalarParamOverrides;
    
    UPROPERTY()
    TMap<FName, FLinearColor> VectorParamOverrides;
    
    UPROPERTY()
    TMap<FName, UTexture*> TextureParamOverrides;
    
    FCompositingParamPayload();
};

