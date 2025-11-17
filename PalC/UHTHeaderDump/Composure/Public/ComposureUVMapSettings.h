#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ComposureUVMapSettings.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct COMPOSURE_API FComposureUVMapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMatrix PreUVDisplacementMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMatrix PostUVDisplacementMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DisplacementDecodeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* DisplacementTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseDisplacementBlueAndAlphaChannels: 1;
    
    FComposureUVMapSettings();
};

