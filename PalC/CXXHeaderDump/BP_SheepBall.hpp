#ifndef UE4SS_SDK_BP_SheepBall_HPP
#define UE4SS_SDK_BP_SheepBall_HPP

class ABP_SheepBall_C : public ABP_MonsterBase_C
{
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0B20 (size: 0x8)
    class USphereComponent* Shield;                                                   // 0x0B28 (size: 0x8)
    class UBP_CoopParam_Shield_C* BP_CoopParam_Sheild;                                // 0x0B30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0B38 (size: 0x8)

}; // Size: 0xB40

#endif
