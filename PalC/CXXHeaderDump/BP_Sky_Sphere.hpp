#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : public AActor
{
    class UStaticMeshComponent* SkySphereMesh;
    class USceneComponent* Base;
    class UMaterialInstanceDynamic* Sky material;
    bool Refresh material;
    class ADirectionalLight* Directional light actor;
    bool Colors determined by sun position;
    double Sun height;
    double Sun brightness;
    double Horizon falloff;
    FLinearColor Zenith Color;
    FLinearColor Horizon color;
    FLinearColor Cloud color;
    FLinearColor Overall color;
    double Cloud speed;
    double Cloud opacity;
    double Stars brightness;
    class UCurveLinearColor* Horizon color curve;
    class UCurveLinearColor* Zenith color curve;
    class UCurveLinearColor* Cloud color curve;

    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript();
};

#endif
