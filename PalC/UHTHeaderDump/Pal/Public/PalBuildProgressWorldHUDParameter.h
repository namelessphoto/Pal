#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalBuildProgressWorldHUDParameter.generated.h"

class APalBuildObject;
class UPalBuildProcess;

UCLASS(BlueprintType)
class UPalBuildProgressWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalBuildProcess* BuildProcess;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    APalBuildObject* BuildObject;
    
    UPalBuildProgressWorldHUDParameter();

};

