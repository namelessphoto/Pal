#ifndef UE4SS_SDK_BP_SkyCreatorLightingVolume_HPP
#define UE4SS_SDK_BP_SkyCreatorLightingVolume_HPP

class ABP_SkyCreatorLightingVolume_C : public APalSkyCreatorLightingVolume
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SkyCreatorLightingVolume(int32 EntryPoint);
};

#endif
