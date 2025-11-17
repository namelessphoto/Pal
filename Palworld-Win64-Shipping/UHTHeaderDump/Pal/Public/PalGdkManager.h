#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGdkManager.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalGdkManager : public UObject {
    GENERATED_BODY()
public:
    UPalGdkManager();

    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfileCard(const FString& UserId);
    
};

