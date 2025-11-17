#ifndef UE4SS_SDK_BP_PalSupplyIncidentSpawnerBase_HPP
#define UE4SS_SDK_BP_PalSupplyIncidentSpawnerBase_HPP

class ABP_PalSupplyIncidentSpawnerBase_C : public ABP_PalRandomIncidentSpawnerTemplate_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bIsPalSpawner;
    bool bWipedOut;

    void ReleaseIncident();
    void WipedOut();
    void ReceiveBeginPlay();
    void OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter);
    void ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase(int32 EntryPoint);
};

#endif
