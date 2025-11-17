#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RenderableTriangleVertex.generated.h"

USTRUCT()
struct FRenderableTriangleVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FVector2D UV;
    
    UPROPERTY()
    FVector Normal;
    
    UPROPERTY()
    FColor Color;
    
    MODELINGCOMPONENTS_API FRenderableTriangleVertex();
};

