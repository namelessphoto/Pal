#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_MotionWarping.generated.h"

class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;

UCLASS(CollapseCategories, EditInlineNew)
class MOTIONWARPING_API UAnimNotifyState_MotionWarping : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    URootMotionModifier* RootMotionModifier;
    
    UAnimNotifyState_MotionWarping();

    UFUNCTION(BlueprintImplementableEvent)
    void OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION()
    void OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION()
    void OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION()
    void OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintNativeEvent)
    URootMotionModifier* AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const;
    
};

