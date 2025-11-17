#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PocketpairUserInfo.generated.h"

UCLASS(BlueprintType)
class POCKETPAIRUSER_API UPocketpairUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPocketpairUserInfo();

    UFUNCTION(BlueprintPure)
    FName GetOnlineSubsystemName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetNickname() const;
    
    UFUNCTION(BlueprintPure)
    FUniqueNetIdRepl GetNetId() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugString() const;
    
};

