#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFastLabResearchEffectRepInfoArray.h"
#include "PalFastLabResearchRepInfoArray.h"
#include "PalGuildLab.generated.h"

class UPalGuildLab;

UCLASS()
class PAL_API UPalGuildLab : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildLab*, Lab);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateCurrentResearchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateCurrentResearchProgressDelegateInServer;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastLabResearchRepInfoArray ResearchRepInfoArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastLabResearchEffectRepInfoArray ResearchEffectRepInfoArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentResearchId)
    FName CurrentResearchId;
    
public:
    UPalGuildLab();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_CurrentResearchId(const FName OldValue);
    
};

