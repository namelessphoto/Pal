#pragma once
#include "CoreMinimal.h"
#include "SocialPlatformDescription.h"
#include "UserPlatform.generated.h"

USTRUCT(BlueprintType)
struct PARTY_API FUserPlatform {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSocialPlatformDescription PlatformDescription;
    
public:
    FUserPlatform();
};

