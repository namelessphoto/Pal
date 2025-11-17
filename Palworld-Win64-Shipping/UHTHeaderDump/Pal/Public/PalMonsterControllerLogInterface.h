#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalMonsterControllerBaseCampLogContent.h"
#include "PalMonsterControllerLogInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMonsterControllerLogInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMonsterControllerLogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBaseCampLog(const FPalMonsterControllerBaseCampLogContent& Content);
    
};

