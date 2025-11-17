#pragma once
#include "CoreMinimal.h"
#include "OnlineResultInformation.generated.h"

USTRUCT(BlueprintType)
struct FOnlineResultInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWasSuccessful;
    
    UPROPERTY(BlueprintReadOnly)
    FString ErrorId;
    
    UPROPERTY(BlueprintReadOnly)
    FText ErrorText;
    
    COMMONUSER_API FOnlineResultInformation();
};

