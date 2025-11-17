#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampTaskChecker.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class PAL_API UPalBaseCampTaskChecker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* taskDataTable;
    
public:
    UPalBaseCampTaskChecker();

};

