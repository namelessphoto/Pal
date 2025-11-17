#ifndef UE4SS_SDK_BP_MapObject_DamagableRock0009_HPP
#define UE4SS_SDK_BP_MapObject_DamagableRock0009_HPP

class ABP_MapObject_DamagableRock0009_C : public APalMapObject
{
    class UStaticMeshComponent* Mesh2;
    class UStaticMeshComponent* Mesh1;
    class UBoxComponent* CheckOverlapCollision;
    class UBoxComponent* WorkableBounds;
    class UArrowComponent* IndicatorOrigin;
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
