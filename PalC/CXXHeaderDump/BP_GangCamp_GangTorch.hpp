#ifndef UE4SS_SDK_BP_GangCamp_GangTorch_HPP
#define UE4SS_SDK_BP_GangCamp_GangTorch_HPP

class ABP_GangCamp_GangTorch_C : public AActor
{
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_TorchFire;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
