#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SocialGroupChannel.generated.h"

class USocialUser;

UCLASS()
class PARTY_API USocialGroupChannel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USocialUser* SocialUser;
    
    UPROPERTY()
    FUniqueNetIdRepl GroupId;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    TArray<USocialUser*> Members;
    
public:
    USocialGroupChannel();

};

