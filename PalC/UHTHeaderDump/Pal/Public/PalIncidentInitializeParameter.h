#pragma once
#include "CoreMinimal.h"
#include "PalIncidentInitializeParameter.generated.h"

class UObject;
class UPalIncidentBase;
class UPalIncidentDynamicParameter;

USTRUCT(BlueprintType)
struct FPalIncidentInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName IncidentId;
    
    UPROPERTY()
    FName Option;
    
    UPROPERTY()
    UObject* OccuredObject;
    
    UPROPERTY()
    UObject* OwnerObject;
    
    UPROPERTY()
    UPalIncidentDynamicParameter* DynamicParameter;
    
    UPROPERTY()
    UPalIncidentBase* ParentObject;
    
    PAL_API FPalIncidentInitializeParameter();
};

