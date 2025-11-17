#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GameUIManagerSubsystem.generated.h"

class UGameUIPolicy;

UCLASS(Abstract, Config=Game)
class COMMONGAME_API UGameUIManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGameUIPolicy* CurrentPolicy;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UGameUIPolicy> DefaultUIPolicyClass;
    
public:
    UGameUIManagerSubsystem();

};

