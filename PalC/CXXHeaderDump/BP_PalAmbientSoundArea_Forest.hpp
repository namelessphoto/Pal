#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_Forest_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_Forest_HPP

class ABP_PalAmbientSoundArea_Forest_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    class UPrimitiveComponent* GetAreaCollision();
};

#endif
