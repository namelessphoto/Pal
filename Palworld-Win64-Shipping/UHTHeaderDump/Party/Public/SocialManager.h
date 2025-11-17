#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialManager.generated.h"

class USocialDebugTools;
class USocialToolkit;

UCLASS(Config=Game, Within=GameInstance)
class PARTY_API USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<USocialToolkit*> SocialToolkits;
    
    UPROPERTY()
    USocialDebugTools* SocialDebugTools;
    
public:
    USocialManager();

};

