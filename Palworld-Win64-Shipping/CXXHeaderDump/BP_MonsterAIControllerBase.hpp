#ifndef UE4SS_SDK_BP_MonsterAIControllerBase_HPP
#define UE4SS_SDK_BP_MonsterAIControllerBase_HPP

class ABP_MonsterAIControllerBase_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_AIADamageReaction_C* BP_AIADamageReaction;
    TSubclassOf<class UPalAIActionBase> DefaultActionClass;
    TSubclassOf<class UPalAIActionCompositeBase> DefaultRootCompositeActionClass;
    bool bPlayDefaultCompositeAction;
    bool IsSetupEnd;
    bool IsAutoPlayDefaultAction;

    void ToLogFontStyleName(EPalMonsterControllerBaseCampLogType LogType, FName& StyleName);
    void ShowBaseCampLog_Internal(FPalMonsterControllerBaseCampLogContent& Content);
    void CreateBaseCampLogMessageText(FPalMonsterControllerBaseCampLogContent& Content, FText& Result);
    void To Log Tone Type(EPalMonsterControllerBaseCampLogType LogType, EPalLogContentToneType& ToneType);
    void PlayDefaultAction();
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveTick(float DeltaSeconds);
    void カスタムイベント_0(class APalCharacter* InCharacter);
    void SetupBySpawner();
    void ExecuteUbergraph_BP_MonsterAIControllerBase(int32 EntryPoint);
};

#endif
