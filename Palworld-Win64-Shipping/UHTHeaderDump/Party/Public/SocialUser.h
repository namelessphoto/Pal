#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialUser.generated.h"

UCLASS(Within=SocialToolkit)
class PARTY_API USocialUser : public UObject {
    GENERATED_BODY()
public:
    USocialUser();

};

