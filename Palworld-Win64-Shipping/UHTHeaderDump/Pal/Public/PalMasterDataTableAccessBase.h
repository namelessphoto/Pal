#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMasterDataTableAccessBase.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class UPalMasterDataTableAccessBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UDataTable* DataTable;
    
public:
    UPalMasterDataTableAccessBase();

    UFUNCTION(BlueprintPure)
    TArray<FName> GetRowNames() const;
    
};

