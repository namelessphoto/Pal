#pragma once
#include "CoreMinimal.h"
#include "EImGuiCanvasSizeType.h"
#include "ImGuiCanvasSizeInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiCanvasSizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EImGuiCanvasSizeType SizeType;
    
    UPROPERTY(EditAnywhere)
    int32 Width;
    
    UPROPERTY(EditAnywhere)
    int32 Height;
    
    UPROPERTY(EditAnywhere)
    bool bExtendToViewport;
    
    IMGUI_API FImGuiCanvasSizeInfo();
};

