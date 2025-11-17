#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectRaidBossSummon.generated.h"

UCLASS()
class PAL_API APalBuildObjectRaidBossSummon : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectRaidBossSummon(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void StartPerform();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPerformComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayPerform();
    
};

