#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyAttachToObjectBase.generated.h"

UCLASS(Abstract)
class PAL_API UPalBuildObjectInstallStrategyAttachToObjectBase : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
    UPalBuildObjectInstallStrategyAttachToObjectBase();

};

