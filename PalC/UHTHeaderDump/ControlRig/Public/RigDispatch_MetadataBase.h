#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_MetadataBase.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigDispatch_MetadataBase : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    FRigDispatch_MetadataBase();
};

