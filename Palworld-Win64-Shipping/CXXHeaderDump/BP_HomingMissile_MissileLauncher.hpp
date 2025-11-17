#ifndef UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP
#define UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP

class ABP_HomingMissile_MissileLauncher_C : public ABP_HomingMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_MissileExhaust1;
    double RocketSpeed;
    float RocketStartDelay;

    void Find Target Actor(class APalCharacter*& PalCharacter);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HomingMissile_MissileLauncher(int32 EntryPoint);
};

#endif
