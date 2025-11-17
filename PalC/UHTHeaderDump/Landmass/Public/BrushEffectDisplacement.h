#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BrushEffectDisplacement.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBrushEffectDisplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisplacementHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisplacementTiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Midpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeightmapInfluence;
    
    LANDMASS_API FBrushEffectDisplacement();
};

