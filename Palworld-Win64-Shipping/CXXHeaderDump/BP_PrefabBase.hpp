#ifndef UE4SS_SDK_BP_PrefabBase_HPP
#define UE4SS_SDK_BP_PrefabBase_HPP

class ABP_PrefabBase_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;
    class UStaticMesh* StaticMesh;
    double ThicknessScale;
    bool UseJointMeshes;
    TArray<bool> JointsToExclude;
    FRandomStream RandomStream;
    int32 RandomSeed;
    TArray<FSplinesInEditor> Splines;
    bool UseAdvancedSplines;
    TArray<FString> Debug;
    class USplineComponent* CurrentSpline;
    bool SplineNotExists;
    FSplinesInEditor DefaultSplineSetup;
    FRiverSplineElement CurrentSplineProperties;
    bool SplineExist;

    void GenerateSplineMesh(TEnumAsByte<ECollisionEnabled> Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, FVector Offset, FVector Scale, double TangetScale, double Spacing, FRotator Rotation, class UStaticMesh* StaticMesh);
    void UserConstructionScript();
};

#endif
