#ifndef UE4SS_SDK_BPI_PalWeaponAnimatioNotify_HPP
#define UE4SS_SDK_BPI_PalWeaponAnimatioNotify_HPP

class IBPI_PalWeaponAnimatioNotify_C : public IInterface
{

    void OnNotify(TEnumAsByte<E_PalWeaponAnimationNotify> Notify);
}; // Size: 0x28

#endif
