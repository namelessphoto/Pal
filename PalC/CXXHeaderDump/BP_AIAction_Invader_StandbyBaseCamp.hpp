#ifndef UE4SS_SDK_BP_AIAction_Invader_StandbyBaseCamp_HPP
#define UE4SS_SDK_BP_AIAction_Invader_StandbyBaseCamp_HPP

class UBP_AIAction_Invader_StandbyBaseCamp_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector BaseCampPos;

    void SightCheckAndResponse(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void OnSquadMemberDeadEvent(FPalDeadInfo DeadInbfo);
    void SoundEvent(FVector EmitLocation);
    void Fun_Damage_AIResponse(FPalDamageResult DamageResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp(int32 EntryPoint);
};

#endif
