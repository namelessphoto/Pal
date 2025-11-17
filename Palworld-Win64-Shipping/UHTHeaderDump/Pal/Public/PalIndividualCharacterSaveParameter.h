#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalGenderType.h"
#include "EPalStatusHungerType.h"
#include "EPalStatusPhysicalHealthType.h"
#include "EPalWazaID.h"
#include "EPalWorkSuitability.h"
#include "FixedPoint64.h"
#include "FloatContainer.h"
#include "PalArenaCharacterRestoreParameter.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalFoodRegeneInfo.h"
#include "PalGotStatusPoint.h"
#include "PalIndividualCharacterCacheParameter.h"
#include "PalWorkSuitabilityInfo.h"
#include "PalWorkSuitabilityPreferenceInfo.h"
#include "Templates/SubclassOf.h"
#include "PalIndividualCharacterSaveParameter.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalIndividualCharacterSaveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CharacterID;
    
    UPROPERTY(EditAnywhere)
    FName UniqueNPCID;
    
    UPROPERTY(EditAnywhere)
    EPalGenderType Gender;
    
    UPROPERTY(EditAnywhere, Transient)
    TSubclassOf<APalCharacter> CharacterClass;
    
    UPROPERTY(EditAnywhere)
    uint8 Level;
    
    UPROPERTY(EditAnywhere)
    uint8 Rank;
    
    UPROPERTY(EditAnywhere)
    uint16 RankUpExp;
    
    UPROPERTY(EditAnywhere)
    uint8 Rank_HP;
    
    UPROPERTY(EditAnywhere)
    uint8 Rank_Attack;
    
    UPROPERTY(EditAnywhere)
    uint8 Rank_Defence;
    
    UPROPERTY(EditAnywhere)
    uint8 Rank_CraftSpeed;
    
    UPROPERTY(EditAnywhere)
    int64 Exp;
    
    UPROPERTY(EditAnywhere)
    FString NickName;
    
    UPROPERTY(EditAnywhere)
    FString FilteredNickName;
    
    UPROPERTY(EditAnywhere)
    bool IsRarePal;
    
    UPROPERTY(EditAnywhere)
    TArray<EPalWazaID> EquipWaza;
    
    UPROPERTY(EditAnywhere)
    TArray<EPalWazaID> MasteredWaza;
    
    UPROPERTY(EditAnywhere)
    FFixedPoint64 Hp;
    
    UPROPERTY(EditAnywhere)
    uint8 Talent_HP;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 Talent_Melee;
    
    UPROPERTY(EditAnywhere)
    uint8 Talent_Shot;
    
    UPROPERTY(EditAnywhere)
    uint8 Talent_Defense;
    
    UPROPERTY(EditAnywhere)
    float FullStomach;
    
    UPROPERTY(EditAnywhere)
    EPalStatusPhysicalHealthType PhysicalHealth;
    
    UPROPERTY(EditAnywhere)
    EPalBaseCampWorkerSickType WorkerSick;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PassiveSkillList;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 DyingTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    FFixedPoint64 MP;
    
    UPROPERTY(EditAnywhere)
    bool IsPlayer;
    
    UPROPERTY(VisibleInstanceOnly)
    FDateTime OwnedTime;
    
    UPROPERTY(VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FGuid> OldOwnerPlayerUIds;
    
    UPROPERTY(EditAnywhere, Transient)
    FFixedPoint64 MaxHP;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 Support;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 CraftSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FPalWorkSuitabilityInfo> CraftSpeeds;
    
    UPROPERTY(EditAnywhere)
    FFixedPoint64 ShieldHP;
    
    UPROPERTY(EditAnywhere, Transient)
    FFixedPoint64 ShieldMaxHP;
    
    UPROPERTY(EditAnywhere)
    bool bApplyShieldDamage;
    
    UPROPERTY(EditAnywhere, Transient)
    FFixedPoint64 MaxMP;
    
    UPROPERTY(EditAnywhere, Transient)
    FFixedPoint64 MaxSP;
    
    UPROPERTY(EditAnywhere)
    EPalStatusHungerType HungerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SanityValue;
    
    UPROPERTY(EditAnywhere)
    EPalBaseCampWorkerEventType BaseCampWorkerEventType;
    
    UPROPERTY(EditAnywhere)
    float BaseCampWorkerEventProgressTime;
    
    UPROPERTY(EditAnywhere)
    FPalContainerId ItemContainerId;
    
    UPROPERTY(EditAnywhere, Transient)
    FPalContainerId EquipItemContainerId;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalCharacterSlotId SlotId;
    
    UPROPERTY(EditAnywhere, Transient)
    float MaxFullStomach;
    
    UPROPERTY(Transient)
    float FullStomachDecreaseRate_Tribe;
    
    UPROPERTY(EditAnywhere)
    uint16 UnusedStatusPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalGotStatusPoint> GotStatusPointList;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalGotStatusPoint> GotExStatusPointList;
    
    UPROPERTY(Transient)
    FFloatContainer DecreaseFullStomachRates;
    
    UPROPERTY(Transient)
    FFloatContainer AffectSanityRates;
    
    UPROPERTY(Transient)
    FFloatContainer CraftSpeedRates;
    
    UPROPERTY()
    FVector LastJumpedLocation;
    
    UPROPERTY()
    FName FoodWithStatusEffect;
    
    UPROPERTY()
    int32 Tiemr_FoodWithStatusEffect;
    
    UPROPERTY()
    FPalFoodRegeneInfo FoodRegeneEffectInfo;
    
    UPROPERTY()
    EPalWorkSuitability CurrentWorkSuitability;
    
    UPROPERTY(EditInstanceOnly)
    FPalWorkSuitabilityPreferenceInfo WorkSuitabilityOptionInfo;
    
    UPROPERTY()
    bool bAppliedDeathPenarty;
    
    UPROPERTY()
    bool bEnablePlayerRespawnInHardcore;
    
    UPROPERTY()
    float PalReviveTimer;
    
    UPROPERTY(EditAnywhere)
    uint8 VoiceID;
    
    UPROPERTY(EditAnywhere)
    FGuid SkinAppliedCharacterId;
    
    UPROPERTY(EditAnywhere)
    FName SkinName;
    
    UPROPERTY()
    bool IsFavoritePal;
    
    UPROPERTY(EditAnywhere)
    uint8 FavoriteIndex;
    
    UPROPERTY(EditAnywhere)
    FGuid MapObjectConcreteInstanceIdAssignedToExpedition;
    
    UPROPERTY()
    FPalArenaCharacterRestoreParameter ArenaRestoreParameter;
    
    UPROPERTY()
    TArray<FPalWorkSuitabilityInfo> GotWorkSuitabilityAddRankList;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid LastNickNameModifierPlayerUid;
    
    UPROPERTY()
    bool bImportedCharacter;
    
    UPROPERTY()
    int32 FriendshipPoint;
    
    UPROPERTY()
    int32 FriendshipOtomoSec;
    
    UPROPERTY()
    int32 FriendshipActiveOtomoSec;
    
    UPROPERTY()
    int32 FriendshipBasecampSec;
    
    UPROPERTY()
    bool bFavoriteChangedByFriendship;
    
    UPROPERTY()
    int32 ArenaRankPoint;
    
    UPROPERTY()
    bool bDisableSaleInPalLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FPalIndividualCharacterCacheParameter Dynamic;
    
    PAL_API FPalIndividualCharacterSaveParameter();
};

