#ifndef UE4SS_SDK_BP_FunnelCharacterAIController_HPP
#define UE4SS_SDK_BP_FunnelCharacterAIController_HPP

class ABP_FunnelCharacterAIController_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UPalAIActionCompositeBase> DefaultRootCompositeActionClass;
    FVector FollowInterpolatedPos;
    double FollowSpeed;
    FName flagName;

    void SetEnableReticleTargetFlag(bool Enable);
    void OnInactive();
    void OnActive();
    void StopAction();
    void PlayDefaultAction();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FunnelCharacterAIController(int32 EntryPoint);
};

#endif
