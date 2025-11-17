#ifndef UE4SS_SDK_BP_LevelObject_StaticRespawnPoint_HPP
#define UE4SS_SDK_BP_LevelObject_StaticRespawnPoint_HPP

class ABP_LevelObject_StaticRespawnPoint_C : public APalLevelObjectRespawnPoint
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* Root;

};

#endif
