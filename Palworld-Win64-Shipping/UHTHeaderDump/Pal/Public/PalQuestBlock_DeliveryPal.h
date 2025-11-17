#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterSlotId.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DeliveryPal.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DeliveryPal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PalMonsterData> RequirePalIdArray_OR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalDataTableRowName_PassiveSkillData> RequirePassiveIdArray_OR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalWorkSuitability> RequireWorkSuitabilityArray_OR;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 requireNum;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DeliveredCount)
    int32 DeliveredCount;
    
public:
    UPalQuestBlock_DeliveryPal();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_DeliveredCount();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidDeliveryPal(const FPalCharacterSlotId& CheckSlotId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainDeliveryNum() const;
    
    UFUNCTION(BlueprintCallable)
    void Delivery(const TArray<FPalCharacterSlotId>& DeliveryPalSlotIdArray);
    
};

