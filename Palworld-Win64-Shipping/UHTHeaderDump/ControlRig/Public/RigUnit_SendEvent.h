#pragma once
#include "CoreMinimal.h"
#include "ERigEvent.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SendEvent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SendEvent : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyDuringInteraction;
    
    FRigUnit_SendEvent();
};

