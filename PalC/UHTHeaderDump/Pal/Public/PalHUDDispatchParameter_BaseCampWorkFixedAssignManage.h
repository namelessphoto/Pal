#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_BaseCampWorkFixedAssignManage.generated.h"

class UPalUIBaseCampWorkFixedAssignManageModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_BaseCampWorkFixedAssignManage : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIBaseCampWorkFixedAssignManageModel* Model;
    
    UPalHUDDispatchParameter_BaseCampWorkFixedAssignManage();

};

