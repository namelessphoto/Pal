#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendClassType.generated.h"

UENUM()
    External,
    Graph,
    Input,
    Output,
    Literal,
    Variable,
    VariableDeferredAccessor,
    VariableAccessor,
    VariableMutator,
    Template,
    Invalid,
};

