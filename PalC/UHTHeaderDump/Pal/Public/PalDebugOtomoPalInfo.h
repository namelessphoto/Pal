#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalDebugOtomoPalInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugOtomoPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TalentLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalWazaID> WazaList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalCharacterStatusRank> StatusRank;
    
    UPROPERTY(EditAnywhere)
    int32 FriendshipRank;
    
    PAL_API FPalDebugOtomoPalInfo();
};

