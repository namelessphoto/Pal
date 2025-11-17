#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialDebugTools.generated.h"

UCLASS(Config=Game, Within=SocialManager)
class PARTY_API USocialDebugTools : public UObject {
    GENERATED_BODY()
public:
    USocialDebugTools();

};

