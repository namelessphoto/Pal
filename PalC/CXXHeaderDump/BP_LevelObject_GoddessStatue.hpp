#ifndef UE4SS_SDK_BP_LevelObject_GoddessStatue_HPP
#define UE4SS_SDK_BP_LevelObject_GoddessStatue_HPP

class ABP_LevelObject_GoddessStatue_C : public APalLevelObjectCharacterStatusOperator
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;
    class UNiagaraComponent* NS_GoddessStatue_Glow;
    class USceneComponent* IndicatorOrigin;
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* Root;

};

#endif
