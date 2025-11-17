#ifndef UE4SS_SDK_BP_ShooterAnime_ThrowBase_HPP
#define UE4SS_SDK_BP_ShooterAnime_ThrowBase_HPP

class UBP_ShooterAnime_ThrowBase_C : public UPalShooterAnimeAssetBase
{
    class UAnimMontage* Ride_Fire_Front;
    class UAnimMontage* Ride_Fire_Right;
    class UAnimMontage* Ride_Fire_Left;

    void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);
};

#endif
