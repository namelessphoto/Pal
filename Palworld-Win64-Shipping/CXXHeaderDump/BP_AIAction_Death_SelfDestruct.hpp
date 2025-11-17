#ifndef UE4SS_SDK_BP_AIAction_Death_SelfDestruct_HPP
#define UE4SS_SDK_BP_AIAction_Death_SelfDestruct_HPP

class UBP_AIAction_Death_SelfDestruct_C : public UBP_AIAction_Death_C
{
    TMap<class EPalWazaID, class TSubclassOf<UBP_ActionDeath_C>> DeathActionMap;

    void GetDeathActionClass(TSubclassOf<class UBP_ActionDeath_C>& DeathAction);
};

#endif
