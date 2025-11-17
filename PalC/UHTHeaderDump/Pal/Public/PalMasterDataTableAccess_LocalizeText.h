#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_LocalizeText.generated.h"

UCLASS()
class UPalMasterDataTableAccess_LocalizeText : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_LocalizeText();

    UFUNCTION(BlueprintPure)
    FText FindRow(FName RowName) const;
    
};

