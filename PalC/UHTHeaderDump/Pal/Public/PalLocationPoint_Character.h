#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalCharacterLocationType.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_Character.generated.h"

class AActor;

UCLASS()
class PAL_API UPalLocationPoint_Character : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalInstanceID IndividualId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalCharacterLocationType CharacterLocationType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid TargetBaseCampID;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName CharacterID;
    
public:
    UPalLocationPoint_Character();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnDestroyedTarget(AActor* Target);
    
    UFUNCTION()
    void OnDeadTarget(FPalDeadInfo Info);
    
protected:
    UFUNCTION(BlueprintPure)
    EPalCharacterLocationType GetCharacterLocationType() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterID() const;
    
};

