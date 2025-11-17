#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "PalUMGCustomVertexData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalUMGCustomVertexData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 texCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D materialTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 pixelWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 pixelHeight;
    
    FPalUMGCustomVertexData();
};

