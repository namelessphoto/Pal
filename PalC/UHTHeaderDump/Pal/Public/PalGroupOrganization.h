#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalOrganizationType.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalGroupBase.h"
#include "PalGroupOrganization.generated.h"

UCLASS()
class UPalGroupOrganization : public UPalGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalOrganizationType OrganizationType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> BaseCampIds;
    
public:
    UPalGroupOrganization();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnDamage(FPalDamageResult DamageResult);
    
};

