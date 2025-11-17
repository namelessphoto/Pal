#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyNormal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalBuildObjectInstallStrategyPlaceOnItemProvider.generated.h"

UCLASS(Abstract)
class PAL_API UPalBuildObjectInstallStrategyPlaceOnItemProvider : public UPalBuildObjectInstallStrategyNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData TargetStaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStandUpRight;
    
public:
    UPalBuildObjectInstallStrategyPlaceOnItemProvider();

};

