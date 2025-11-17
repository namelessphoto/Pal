#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELevelInstanceCreationType -FallbackName=ELevelInstanceCreationType
#include "HoudiniLevelInstanceParams.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniLevelInstanceParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    ELevelInstanceCreationType Type;
    
    UPROPERTY()
    FString OutputName;
    
    FHoudiniLevelInstanceParams();
};

