#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "GameViewportWidgetSlot.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FGameViewportWidgetSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchors Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Offsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ZOrder;
    
    FGameViewportWidgetSlot();
};

