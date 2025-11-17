#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "UnderwaterPostProcessSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FUnderwaterPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY()
    UMaterialInterface* UnderwaterPostProcessMaterial;
    
    WATER_API FUnderwaterPostProcessSettings();
};

