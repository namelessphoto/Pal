#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectMeshDefaultSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectMeshDefaultSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName ProfileName;
    
    PAL_API FPalBuildObjectMeshDefaultSetting();
};

