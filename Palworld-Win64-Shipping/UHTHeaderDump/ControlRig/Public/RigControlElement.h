#pragma once
#include "CoreMinimal.h"
#include "RigControlSettings.h"
#include "RigCurrentAndInitialTransform.h"
#include "RigMultiParentElement.h"
#include "RigPreferredEulerAngles.h"
#include "RigControlElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlElement : public FRigMultiParentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigControlSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigCurrentAndInitialTransform Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigCurrentAndInitialTransform Shape;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigPreferredEulerAngles PreferredEulerAngles;
    
public:
    FRigControlElement();
};

