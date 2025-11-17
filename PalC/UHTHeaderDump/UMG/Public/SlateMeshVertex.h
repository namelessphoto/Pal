#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "SlateMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FSlateMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2f Position;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    FVector2f UV0;
    
    UPROPERTY()
    FVector2f UV1;
    
    UPROPERTY()
    FVector2f UV2;
    
    UPROPERTY()
    FVector2f UV3;
    
    UPROPERTY()
    FVector2f UV4;
    
    UPROPERTY()
    FVector2f UV5;
    
    UMG_API FSlateMeshVertex();
};

