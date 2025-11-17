#ifndef UE4SS_SDK_BP_SheepBall_HPP
#define UE4SS_SDK_BP_SheepBall_HPP

class ABP_SheepBall_C : public ABP_MonsterBase_C
{
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;
    class USphereComponent* Shield;
    class UBP_CoopParam_Shield_C* BP_CoopParam_Sheild;
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;

};

#endif
