#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIncidentDynamicParameter.generated.h"

class AActor;

UCLASS(BlueprintType)
class UPalIncidentDynamicParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* Other;
    
    UPalIncidentDynamicParameter();

};

