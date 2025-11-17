#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERootMotionModifierState.h"
#include "OnRootMotionModifierDelegateDelegate.h"
#include "RootMotionModifier.generated.h"

class UAnimSequenceBase;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class MOTIONWARPING_API URootMotionModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UAnimSequenceBase> Animation;
    
    UPROPERTY(BlueprintReadOnly)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly)
    float EndTime;
    
    UPROPERTY(BlueprintReadOnly)
    float PreviousPosition;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentPosition;
    
    UPROPERTY(BlueprintReadOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ActualStartTime;
    
    UPROPERTY()
    FOnRootMotionModifierDelegate OnActivateDelegate;
    
    UPROPERTY()
    FOnRootMotionModifierDelegate OnUpdateDelegate;
    
    UPROPERTY()
    FOnRootMotionModifierDelegate OnDeactivateDelegate;
    
private:
    UPROPERTY()
    ERootMotionModifierState State;
    
public:
    URootMotionModifier();

};

