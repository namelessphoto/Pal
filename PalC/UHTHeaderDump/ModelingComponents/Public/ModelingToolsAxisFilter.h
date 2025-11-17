#pragma once
#include "CoreMinimal.h"
#include "ModelingToolsAxisFilter.generated.h"

USTRUCT(BlueprintType)
struct MODELINGCOMPONENTS_API FModelingToolsAxisFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAxisX;
    
    UPROPERTY(EditAnywhere)
    bool bAxisY;
    
    UPROPERTY(EditAnywhere)
    bool bAxisZ;
    
    FModelingToolsAxisFilter();
};

