#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalWazaID.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalNPCOtomoWazaDataRow.generated.h"

USTRUCT()
struct FPalNPCOtomoWazaDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID Waza1;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID Waza2;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID Waza3;
    
    PAL_API FPalNPCOtomoWazaDataRow();
};

