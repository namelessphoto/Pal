#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalDropItemType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalStaticItemDataBase.generated.h"

class AActor;
class UPalDynamicItemDataBase;
class UStaticMesh;
class UTexture2D;

UCLASS(BlueprintType)
class UPalStaticItemDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ItemBaseName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPalItemTypeA TypeA;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPalItemTypeB TypeB;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Rarity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Price;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxStackCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SortID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UPalDynamicItemDataBase> DynamicItemDataClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotConsumed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftClassPtr<AActor> actorClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMeshPath;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftClassPtr<AActor> VisualBlueprintClassSoft;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPalDropItemType DropItemType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Durability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill4;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CorruptionFactor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FloatValue1;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName OverrideNameMsgID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName OverrideDescMsgID;
    
public:
    UPalStaticItemDataBase();

    UFUNCTION(BlueprintPure)
    bool IsCorruptible() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDynamicItemClass() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActorClass() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetWorldScaledWeight(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TSoftClassPtr<AActor> GetVisualBlueprintClass(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    FName GetPassiveSkill4() const;
    
    UFUNCTION(BlueprintPure)
    FName GetPassiveSkill3() const;
    
    UFUNCTION(BlueprintPure)
    FName GetPassiveSkill2() const;
    
    UFUNCTION(BlueprintPure)
    FName GetPassiveSkill() const;
    
    UFUNCTION(BlueprintPure)
    void GetNameMsgId(FName& OutMsgID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxStackCount() const;
    
    UFUNCTION(BlueprintPure)
    FName GetId() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UPalDynamicItemDataBase> GetDynamicItemDataClass() const;
    
    UFUNCTION(BlueprintPure)
    void GetDescriptionMsgId(FName& OutMsgID) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllPassiveSkill(TArray<FName>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<AActor> GetActorClass() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseItemToCharacter(const UObject* WorldContentObject, const FPalInstanceID& TargetCharacterID);
    
};

