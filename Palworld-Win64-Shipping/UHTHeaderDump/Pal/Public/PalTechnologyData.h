#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBossType.h"
#include "PalItemSlotId.h"
#include "PalTechnologyDataSet.h"
#include "PalTechnologyDataTableRowBase.h"
#include "PalTechnologyRecipeUnlockDataTableRow.h"
#include "PalTechnologyData.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalTechnologyData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateTechnologyPoint, int32, TechnologyPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnlockedAnyTechnology);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewUnlockedUpdateDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateTechnologyPoint OnUpdateTechnologyPoint;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateTechnologyPoint OnUpdateBossTechnologyPoint;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnlockedAnyTechnology OnUnlockedAnyTechnology;
    
    UPROPERTY(BlueprintAssignable)
    FOnNewUnlockedUpdateDelegate OnNewUnlockedUpdate;
    
    UPROPERTY()
    FPalTechnologyDataSet technologyDataSet;
    
    UPROPERTY()
    FPalTechnologyDataTableRowBase emptyTechnologyData;
    
    UPROPERTY()
    FPalTechnologyRecipeUnlockDataTableRow emptyRecipeTechnologyData;
    
    UPROPERTY(ReplicatedUsing=OnRep_UnlockedTechnologyNameArray)
    TArray<FName> UnlockedTechnologyNameArray;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_TechnologyPoint)
    int32 TechnologyPoint;
    
    UPROPERTY(ReplicatedUsing=OnRep_BossTechnologyPoint)
    int32 bossTechnologyPoint;
    
    UPROPERTY(Transient)
    TArray<FName> DefaultLockRecipeNameArray;
    
    UPROPERTY(Transient)
    TArray<FName> DefaultLockBuildObjectNameArray;
    
public:
    UPalTechnologyData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestUnlockRecipeTechnology(const FName& UnlockTechnologyName);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddTechnologyPointByItem(const FPalItemSlotId& ConsumeSlotId);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddBossTechnologyPointByItem(const FPalItemSlotId& ConsumeSlotId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewUnlockedFlag(const FName& technologyName);
    
protected:
    UFUNCTION()
    void OnUpdateLocalPlayerLevel(int32 addLevel, int32 nowLevel);
    
public:
    UFUNCTION()
    void OnRep_UnlockedTechnologyNameArray();
    
    UFUNCTION()
    void OnRep_TechnologyPoint();
    
    UFUNCTION()
    void OnRep_BossTechnologyPoint();
    
    UFUNCTION(BlueprintPure)
    bool IsUnlockRecipeTechnology(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnlockCraftRecipe(const FName& craftRecipeName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnlockBuildObject(const FName& BuildObjectId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnlockableRecipeTechnology(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTowerBossRequirementSatisfied(const EPalBossType& BossType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNewUnlockedTechnology(const FName& technologyName);
    
    UFUNCTION(BlueprintPure)
    bool IsNewUnlockedBuild_Radial(const FName& BuildName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLabResearchRequirementSatisfied(const FName ResearchId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistNewUnlockedTechnology();
    
    UFUNCTION(BlueprintPure)
    int32 GetTechnologyPoints() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTechnologyName(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    FText GetTechnologyDesc(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    FPalTechnologyDataTableRowBase GetTechlonogyBaseData(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetRecipeTechnologyRowNameArray(const bool DedicatedServerExcept) const;
    
    UFUNCTION(BlueprintPure)
    FPalTechnologyRecipeUnlockDataTableRow GetRecipeTechlonogy(const FName& technologyName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossTechnologyPoints() const;
    
    UFUNCTION(BlueprintPure)
    void FilteringUnlockedRecipe(const TArray<FName>& OriginalResipeIdArray, TArray<FName>& OutRecipeIdArray);
    
    UFUNCTION(BlueprintCallable)
    void CheckNewUnlockedFlag_Radial(const FName& BuildName);
    
};

