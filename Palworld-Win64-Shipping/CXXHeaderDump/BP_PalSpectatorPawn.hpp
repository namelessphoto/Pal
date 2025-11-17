#ifndef UE4SS_SDK_BP_PalSpectatorPawn_HPP
#define UE4SS_SDK_BP_PalSpectatorPawn_HPP

class ABP_PalSpectatorPawn_C : public APalSpectatorPawn
{
    class UCameraComponent* FollowCamera;
    class USpringArmComponent* CameraBoom;

};

#endif
