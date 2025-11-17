#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalDropItemType.h"
#include "EPalElementType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalWazaID.h"
#include "PalStaticItemDataStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalStaticItemDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IconName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalItemTypeA TypeA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalItemTypeB TypeB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rarity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxStackCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Price;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SortID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInTreasureBox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotConsumed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableHandcraft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLegalInGame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TechnologyTreeLock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemStaticClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemDynamicClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemStaticMeshName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName VisualBlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> VisualBlueprintClassSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDropItemType DropItemType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Editor_RowNameHash;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreSatiety;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreConcentration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreSanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GrantEffect1Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrantEffect1Time;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GrantEffect2Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrantEffect2Time;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 GrantEffect3Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrantEffect3Time;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Durability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType ElementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSleepWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MxgazineSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PhysicalAttackValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HPValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PhysicalDefenseValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShieldValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MagicAttackValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MagicDefenseValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkillName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkillName2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkillName3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkillName4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WazaID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CorruptionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FloatValue1;
    
    PAL_API FPalStaticItemDataStruct();
};

