#ifndef UE4SS_SDK_BP_AIActionReaction_FishingSpotElectricShock_HPP
#define UE4SS_SDK_BP_AIActionReaction_FishingSpotElectricShock_HPP

class UBP_AIActionReaction_FishingSpotElectricShock_C : public UBP_AIActionReaction_ElectricShock_C
{
    double EnemyFindRange;

    void FindEnemy(class APalCharacter*& Enemy);
    void OnFinishElectricShock();
};

#endif
