#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalLeashState.h"
#include "PalAILeashActorBase.generated.h"

class APalCharacter;
class UPalNavigationInvokerComponent;

UCLASS(Abstract, NotPlaceable)
class APalAILeashActorBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLeashedPawnStateChanged, APalCharacter*, LeashedCharacter, EPalLeashState, PreviousLeashState, EPalLeashState, LeashState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCharacterOutOfLeashRange, APalCharacter*, LeashedCharacter, FVector, TargetLocation, float, TargetDistance);
    
    UPROPERTY(BlueprintReadOnly)
    float LeashInnerRadius;
    
    UPROPERTY(BlueprintReadOnly)
    float LeashOuterRadius;
    
    UPROPERTY(BlueprintReadOnly)
    float InvokerExtentRadius;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoActivateLeash;
    
    UPROPERTY(BlueprintReadOnly)
    EPalLeashState LeashState;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterOutOfLeashRange OnCharacterOutOfLeashRange;
    
    UPROPERTY(BlueprintAssignable)
    FOnLeashedPawnStateChanged OnLeashedPawnStateChanged;
    
protected:
    UPROPERTY(Instanced)
    UPalNavigationInvokerComponent* NavigationInvoker;
    
public:
    APalAILeashActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLeashLocation(const FVector& NewLeashLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsActiveLeash() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateLeash();
    
    UFUNCTION(BlueprintCallable)
    void ActivateLeash();
    
};

