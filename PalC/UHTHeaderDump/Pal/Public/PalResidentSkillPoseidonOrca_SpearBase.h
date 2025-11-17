#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalResidentSkillModuleBase.h"
#include "PalResidentSkillPoseidonOrca_SpearBase.generated.h"

class APalCharacter;

UCLASS()
class PAL_API UPalResidentSkillPoseidonOrca_SpearBase : public UPalResidentSkillModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated)
    bool bIsOpendBullets;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    int32 CurrentBulletNum;
    
public:
    UPalResidentSkillPoseidonOrca_SpearBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintPure)
    FVector GetAimTargetLocation(APalCharacter* TargetCharacter);
    
};

