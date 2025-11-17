#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoTemplate.generated.h"

USTRUCT()
struct DATASMITHCONTENT_API FDatasmithMeshSectionInfoTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaterialIndex;
    
    FDatasmithMeshSectionInfoTemplate();
};

