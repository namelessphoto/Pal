#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBaseMutable.h"
#include "RigUnit_CollectionLoop.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Collection;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    float Ratio;
    
    UPROPERTY()
    bool Continue;
    
    UPROPERTY(BlueprintReadOnly)
    FControlRigExecuteContext Completed;
    
    FRigUnit_CollectionLoop();
};

