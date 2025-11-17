#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalBaseCampTaskData_BuildObject.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskData_BuildObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName incompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName completeMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_MapObjectData mapObjectRowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 requireNum;
    
    PAL_API FPalBaseCampTaskData_BuildObject();
};

