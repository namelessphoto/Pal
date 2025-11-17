#pragma once
#include "CoreMinimal.h"
#include "DataflowConnection.h"
#include "DataflowOutput.generated.h"

USTRUCT()
struct DATAFLOWCORE_API FDataflowOutput : public FDataflowConnection {
    GENERATED_BODY()
public:
    FDataflowOutput();
};

