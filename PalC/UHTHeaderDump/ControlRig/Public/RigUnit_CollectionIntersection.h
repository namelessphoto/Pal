#pragma once
#include "CoreMinimal.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_CollectionBase.h"
#include "RigUnit_CollectionIntersection.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection B;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Collection;
    
    FRigUnit_CollectionIntersection();
};

