#pragma once
#include "CoreMinimal.h"
#include "EBrushToolSizeType.h"
#include "BrushToolRadius.generated.h"

USTRUCT(BlueprintType)
struct FBrushToolRadius {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBrushToolSizeType SizeType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AdaptiveSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float WorldRadius;
    
    MESHMODELINGTOOLSEXP_API FBrushToolRadius();
};

