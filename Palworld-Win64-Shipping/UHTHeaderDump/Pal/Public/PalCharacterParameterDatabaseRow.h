#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBattleBGMType.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalOrganizationType.h"
#include "EPalSizeType.h"
#include "EPalTribeID.h"
#include "EPalWeaponType.h"
#include "PalCharacterParameterDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterParameterDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OverrideNameTextID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NamePrefixID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OverridePartnerSkillTextID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalTribeID Tribe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BPClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ZukanIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ZukanIndexSuffix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalSizeType Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Rarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalElementType ElementType1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalElementType ElementType2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalGenusCategoryType GenusCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalOrganizationType Organization;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalWeaponType Weapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool WeaponEquip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Hp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MeleeAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShotAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Defense;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Support;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CraftSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friendship_HP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friendship_ShotAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friendship_Defense;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friendship_CraftSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyMaxHPRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyReceiveDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnemyInflictDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CaptureRateCorrect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExpRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Price;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StatusResistUpRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AIResponse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AISightResponse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlowWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RideSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TransportSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SwimSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SwimDashSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBoss;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTowerBoss;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsRaidBoss;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseBossHPGauge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalBattleBGMType BattleBGM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreLeanBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreBlowAway;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreStun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxFullStomach;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FullStomachDecreaseRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FoodAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ViewingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ViewingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HearingRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NooseTrap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Nocturnal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BiologicalGrade;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Predator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Edible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stamina;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaleProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CombiRank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CombiDuplicatePriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreCombi;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshCapsuleRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MeshRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_EmitFlame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Watering;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Seeding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_GenerateElectricity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Handcraft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Collection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Deforest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Mining;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_OilExtraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_ProductMedicine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Cool;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_Transport;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WorkSuitability_MonsterFarm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PassiveSkill1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PassiveSkill2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PassiveSkill3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PassiveSkill4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FirstDefeatRewardItemID;
    
    PAL_API FPalCharacterParameterDatabaseRow();
};

