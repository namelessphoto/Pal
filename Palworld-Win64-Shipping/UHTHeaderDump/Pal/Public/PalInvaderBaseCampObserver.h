#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalInvaderBaseCampObserver.generated.h"

class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API UPalInvaderBaseCampObserver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    UPalBaseCampModel* TargetBaseCamp;
    
    UPROPERTY(VisibleAnywhere)
    FGuid TargetBaseCampID;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsInvading;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsCoolTime;
    
    UPROPERTY(VisibleAnywhere)
    float CoolTimeFinish;
    
    UPROPERTY(VisibleAnywhere)
    float CoolTimeElapsed;
    
    UPROPERTY(VisibleAnywhere)
    float PlayerInBaseCampTimer;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UPalIndividualCharacterHandle*> PlayerHandlesCache;
    
public:
    UPalInvaderBaseCampObserver();

};

