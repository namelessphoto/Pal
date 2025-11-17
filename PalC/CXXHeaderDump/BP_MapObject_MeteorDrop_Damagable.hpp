#ifndef UE4SS_SDK_BP_MapObject_MeteorDrop_Damagable_HPP
#define UE4SS_SDK_BP_MapObject_MeteorDrop_Damagable_HPP

class ABP_MapObject_MeteorDrop_Damagable_C : public APalMapObject
{
    class UStaticMeshComponent* Mesh1;
    class UNiagaraComponent* Niagara;
    class UBoxComponent* CheckOverlapCollision;
    class UBoxComponent* WorkableBounds;
    class UArrowComponent* IndicatorOrigin;
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;

    bool IsShowOutlineInReticleTargetting();
};

#endif
