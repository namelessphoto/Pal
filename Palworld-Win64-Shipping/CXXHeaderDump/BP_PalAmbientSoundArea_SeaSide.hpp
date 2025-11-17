#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_SeaSide_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_SeaSide_HPP

class ABP_PalAmbientSoundArea_SeaSide_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    class UPrimitiveComponent* GetAreaCollision();
};

#endif
