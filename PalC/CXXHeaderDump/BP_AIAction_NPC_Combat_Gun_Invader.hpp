#ifndef UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_Invader_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Combat_Gun_Invader_HPP

class UBP_AIAction_NPC_Combat_Gun_Invader_C : public UBP_AIAction_NPC_Combat_Gun_C
{
    bool IgnoreLineTraceOnce;

    void SwitchTickState();
};

#endif
