#ifndef UE4SS_SDK_BP_PalIncidentRandomActionMerchantwithPAL_HPP
#define UE4SS_SDK_BP_PalIncidentRandomActionMerchantwithPAL_HPP

class UBP_PalIncidentRandomActionMerchantwithPAL_C : public UBP_PalIncidentRandomActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class APalNPC*> SpawnNPCList;
    TArray<class APalMonsterCharacter*> SpawnMonsterList;
    bool IsBinding;

    void OnDamage(FPalDamageResult DamageResult);
    void CollectSpawnCharacter();
    void UnbindOnDamage();
    void BindOnDamage();
    void OnAllNpcSpawned();
    void OnTerminate();
    void ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL(int32 EntryPoint);
};

#endif
