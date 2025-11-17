#pragma once
#include "CoreMinimal.h"
#include "HoudiniMaterialIdentifier.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniMaterialIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MaterialObjectPath;
    
    UPROPERTY()
    bool bIsHoudiniMaterial;
    
    UPROPERTY()
    bool bMakeMaterialInstance;
    
    UPROPERTY()
    FString MaterialInstanceParametersSlug;
    
    FHoudiniMaterialIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FHoudiniMaterialIdentifier) { return 0; }

