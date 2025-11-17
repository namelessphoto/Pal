#pragma once
#include "CoreMinimal.h"
#include "PalIncidentNotifyParameter.generated.h"

class UObject;
class UPalIncidentBase;

USTRUCT(BlueprintType)
struct FPalIncidentNotifyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName IncidentId;
    
    UPROPERTY(BlueprintReadOnly)
    FName IncidentType;
    
    UPROPERTY(BlueprintReadOnly)
    UObject* OccuredObject;
    
    UPROPERTY(BlueprintReadOnly)
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadOnly)
    UPalIncidentBase* IncidentObject;
    
    PAL_API FPalIncidentNotifyParameter();
};

