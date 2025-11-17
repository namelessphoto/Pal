#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFunnelSkillModule.h"
#include "PalFunnelSkillModuleCollectItemSearchInfo.h"
#include "PalFunnelSkillModuleCollectItem.generated.h"

class APalMapObject;

UCLASS()
class PAL_API UPalFunnelSkillModuleCollectItem : public UPalFunnelSkillModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> SearchItemRange;
    
protected:
    UPROPERTY()
    FGuid CollectItemId;
    
    UPROPERTY()
    bool bShouldSetSkillAction;
    
    UPROPERTY()
    TMap<FGuid, FPalFunnelSkillModuleCollectItemSearchInfo> SearchItemInfoList;
    
public:
    UPalFunnelSkillModuleCollectItem();

    UFUNCTION()
    void SearchCollectableItem(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool Pickup();
    
    UFUNCTION()
    void ObserveCollectItem(float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsNearTargetLocation(FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    APalMapObject* GetTargetObject() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTargetLocation(FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetTargetId() const;
    
};

