#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_Sakura_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_Sakura_HPP

class ABP_PalAmbientSoundArea_Sakura_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    class UPrimitiveComponent* GetAreaCollision();
};

#endif
