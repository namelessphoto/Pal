#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=TransformableHandle -FallbackName=TransformableHandle
#include "TransformableControlHandle.generated.h"

class UControlRig;

UCLASS(BlueprintType)
class CONTROLRIG_API UTransformableControlHandle : public UTransformableHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UControlRig> ControlRig;
    
    UPROPERTY(BlueprintReadOnly)
    FName ControlName;
    
    UTransformableControlHandle();

};

