#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDataTableRowIdMapper.generated.h"

class UDataTable;

UCLASS()
class UPalDataTableRowIdMapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> DataTables;
    
    UPROPERTY(Transient)
    TMap<FName, int32> RowNameHashMap;
    
public:
    UPalDataTableRowIdMapper();

};

