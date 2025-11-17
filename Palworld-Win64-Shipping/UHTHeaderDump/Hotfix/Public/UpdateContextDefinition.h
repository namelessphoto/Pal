#pragma once
#include "CoreMinimal.h"
#include "UpdateContextDefinition.generated.h"

USTRUCT(BlueprintType)
struct HOTFIX_API FUpdateContextDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString Name;
    
    UPROPERTY(Config)
    bool bEnabled;
    
    UPROPERTY(Config)
    bool bCheckAvailabilityOnly;
    
    UPROPERTY(Config)
    bool bPatchCheckEnabled;
    
    UPROPERTY(Config)
    bool bPlatformEnvironmentDetectionEnabled;
    
    UPROPERTY(Config)
    TSet<FString> AdditionalTags;
    
    FUpdateContextDefinition();
};

