#ifndef UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP
#define UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP

class UBP_Player_Female_ShooterAnime_PalCarry_C : public UPalShooterAnimeAssetBase
{
    class UAnimMontage* Ride_Fire_Front;
    class UAnimMontage* Ride_Fire_Right;
    class UAnimMontage* Ride_Fire_Left;

    void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);
};

#endif
