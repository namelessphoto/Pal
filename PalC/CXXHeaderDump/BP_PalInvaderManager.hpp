#ifndef UE4SS_SDK_BP_PalInvaderManager_HPP
#define UE4SS_SDK_BP_PalInvaderManager_HPP

class UBP_PalInvaderManager_C : public UPalInvaderManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalIncidentNotifyListener_C* IncidentListener;
    FName InvaderEnemyIncidentId;
    FName VisitorNPCIncidentId;

    class UPalInvaderIncidentBase* RequestIncidentVisitorNPC_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
    class UPalInvaderIncidentBase* RequestIncidentInvaderEnemy_BP(class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
    class UPalInvaderIncidentBase* RequestIncident(FName IncidentName, class UObject* OccuredBaseCamp, class UPalIncidentDynamicParameterInvader* Parameter);
    void OnIncidentStateNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const FPalIncidentNotifyParameter& Parameter);
    void RegisterIncidentListener();
    void UnregisterIncidentListener();
    void ExecuteUbergraph_BP_PalInvaderManager(int32 EntryPoint);
};

#endif
