#ifndef UE4SS_SDK_BP_Status_FallDamage_HPP
#define UE4SS_SDK_BP_Status_FallDamage_HPP

class UBP_Status_FallDamage_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Const_DamageStartHeight;
    double Const_DeathHeight;
    bool IsGlider;

    void IsFloating(bool& IsFloating);
    void IsIgnoreCharacter(bool& Ignore);
    void GetLastJumpedZ(double& Z);
    void LandDamage();
    void ResetFallStartPos(bool OnLand);
    void OnBeginStatus();
    void OnLand(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void OnModeChange(class UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void SetUp_FallDamage(class APalCharacter* InCharacter);
    void OnJumped(class UPalCharacterMovementComponent* Component);
    void ExecuteUbergraph_BP_Status_FallDamage(int32 EntryPoint);
};

#endif
