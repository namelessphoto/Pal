#ifndef UE4SS_SDK_BP_PalBossNPCMarker_HPP
#define UE4SS_SDK_BP_PalBossNPCMarker_HPP

class UBP_PalBossNPCMarker_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FST_BossAnimations Anim List;
    bool DoUniqueWazaSeparetedAnim?;
    bool DoCommonWazaSeparetedAnim?;
    TMap<class EPalWazaID, class UAnimMontage*> WazaMontage;
    TMap<class EPalActionType, class FST_RideBossAnimation> ActionMontageMap;
    class UPalActionBase* action;
    EPalActionType Eaction;
    FST_RideBossAnimation STAnim;
    TSubclassOf<class UAnimInstance> AnimLayerClass;

    void FindEActionFromAction(const class UObject* AnyAction, EPalActionType& Eaction);
    void OnWaza(const class UObject* Object);
    void SetRotation();
    void IsAbsoluteRotation();
    void OnNotifyEnd_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnNotifyBegin_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnInterrupted_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnBlendOut_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnCompleted_3695005744180F167B404E8D464E2EA8(FName NotifyName);
    void OnNotifyEnd_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnNotifyBegin_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnInterrupted_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnBlendOut_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnCompleted_DEAF772043DFD4BDE4BE3D9B4DB706D9(FName NotifyName);
    void OnNotifyEnd_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnNotifyBegin_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnInterrupted_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnBlendOut_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnCompleted_1FADD12E42BDE1A6BBA9A5942B550B40(FName NotifyName);
    void OnNotifyEnd_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnNotifyBegin_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnInterrupted_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnBlendOut_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void OnCompleted_79DC72A149AE065376517699E9FF8157(FName NotifyName);
    void ReceiveBeginPlay();
    void OnAction(const class UPalActionBase* action);
    void OnAnyAction_(class UPalActionBase* action);
    void OnAnyActionEnd();
    void ForcePlayAnimWithEAction(const EPalActionType& Eaction);
    void ForceEndAnimWithEAction(const EPalActionType& Eaction);
    void ExecuteUbergraph_BP_PalBossNPCMarker(int32 EntryPoint);
};

#endif
