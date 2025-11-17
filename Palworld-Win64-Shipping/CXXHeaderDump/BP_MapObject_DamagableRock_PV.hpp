#ifndef UE4SS_SDK_BP_MapObject_DamagableRock_PV_HPP
#define UE4SS_SDK_BP_MapObject_DamagableRock_PV_HPP

class ABP_MapObject_DamagableRock_PV_C : public APalMapObject
{
    class UBoxComponent* CheckOverlapCollision;
    class UBoxComponent* WorkableBounds;
    class UArrowComponent* IndicatorOrigin;
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
