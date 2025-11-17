#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESourceEffectMotionFilterModSource.h"
#include "SourceEffectMotionFilterModulationSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectMotionFilterModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectMotionFilterModSource ModulationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ModulationInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ModulationOutputMinimumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ModulationOutputMaximumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateEaseMS;
    
    FSourceEffectMotionFilterModulationSettings();
};

