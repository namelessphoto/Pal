#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PocketpairFriend.generated.h"

UCLASS(BlueprintType)
class UPocketpairFriend : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPocketpairFriend();

    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetNetId();
    
};

