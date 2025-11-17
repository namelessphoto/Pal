#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnit.h"
#include "RigUnit_GetControlRotator.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlRotator : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Rotator;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlRotator();
};

