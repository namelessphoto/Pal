#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_SnowyMountain_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_SnowyMountain_HPP

class ABP_PalAmbientSoundArea_SnowyMountain_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    class UPrimitiveComponent* GetAreaCollision();
};

#endif
