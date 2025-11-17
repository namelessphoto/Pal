#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalArenaNPCOtomo.generated.h"

USTRUCT()
struct FPalArenaNPCOtomo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 TalentLevel;
    
    UPROPERTY(EditAnywhere)
    int32 Rank;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalCharacterStatusRank> StatusRank;
    
    UPROPERTY(EditAnywhere)
    TArray<EPalWazaID> WazaList;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkill;
    
    UPROPERTY(EditAnywhere)
    int32 FriendshipRank;
    
    UPROPERTY(EditAnywhere)
    bool isAlwaysPicked;
    
    PAL_API FPalArenaNPCOtomo();
};

