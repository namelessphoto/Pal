#ifndef UE4SS_SDK_BP_LevelObject_OilField_HPP
#define UE4SS_SDK_BP_LevelObject_OilField_HPP

class ABP_LevelObject_OilField_C : public APalLevelObjectItemProvider
{
    class UStaticMeshComponent* SM_VFX_OilField_00_TF;
    class UDecalComponent* Decal_Oil;
    class UNiagaraComponent* NS_OilLeak_00;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
