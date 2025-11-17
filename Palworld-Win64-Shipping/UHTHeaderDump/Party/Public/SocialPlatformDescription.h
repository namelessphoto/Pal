#pragma once
#include "CoreMinimal.h"
#include "SocialPlatformDescription.generated.h"

USTRUCT(BlueprintType)
struct FSocialPlatformDescription {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString PlatformType;
    
    UPROPERTY()
    FName OnlineSubsystem;
    
    UPROPERTY()
    FString SessionType;
    
    UPROPERTY()
    FString ExternalAccountType;
    
    UPROPERTY()
    FString CrossplayPool;
    
    PARTY_API FSocialPlatformDescription();
};

