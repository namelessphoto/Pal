#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalArenaRank.h"
#include "PalArenaNPCOtomo.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalArenaNPCPresetRow.generated.h"

USTRUCT()
struct FPalArenaNPCPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPalArenaRank ArenaRank;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_PalHumanData NPCID;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_NPCUniqueData UniqueNPCID;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 TalentLevel;
    
    UPROPERTY(EditAnywhere)
    int32 Rank;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalCharacterStatusRank> StatusRank;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalArenaNPCOtomo> OtomoList;
    
    PAL_API FPalArenaNPCPresetRow();
};

