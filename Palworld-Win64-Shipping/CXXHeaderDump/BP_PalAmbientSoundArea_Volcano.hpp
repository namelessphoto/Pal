#ifndef UE4SS_SDK_BP_PalAmbientSoundArea_Volcano_HPP
#define UE4SS_SDK_BP_PalAmbientSoundArea_Volcano_HPP

class ABP_PalAmbientSoundArea_Volcano_C : public APalAmbientSoundAreaBase
{
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    class UPrimitiveComponent* GetAreaCollision();
};

#endif
