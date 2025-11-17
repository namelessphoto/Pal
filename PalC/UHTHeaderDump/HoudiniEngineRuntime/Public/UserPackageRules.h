#pragma once
#include "CoreMinimal.h"
#include "UserPackageRules.generated.h"

class UHoudiniToolsPackageAsset;

USTRUCT()
struct FUserPackageRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHoudiniToolsPackageAsset* ToolsPackageAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Include;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Exclude;
    
    HOUDINIENGINERUNTIME_API FUserPackageRules();
};

