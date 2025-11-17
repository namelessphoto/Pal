#ifndef UE4SS_SDK_BP_CaptureWire_HPP
#define UE4SS_SDK_BP_CaptureWire_HPP

class ABP_CaptureWire_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh_Wire3;
    class UStaticMeshComponent* StaticMesh_Wire2;
    class UStaticMeshComponent* StaticMesh_Wire1;
    class UStaticMeshComponent* StaticMesh_Wire0;
    class USceneComponent* DefaultSceneRoot;
    class APalCharacter* TargetMonster;
    double MovableRange;
    TArray<FVector> AnchorGoalPoint;
    TArray<TEnumAsByte<EObjectTypeQuery>> LayHitObjectTypes;
    TArray<class UStaticMeshComponent*> WireMesh;
    bool isFixMode;
    bool isAnchorReach;
    FVector AnchorCenterPos;
    bool IsSpringable;
    class UBP_AIAction_SimpleLeave_C* SimpleLeaveAIAction;

    void RagDollStart();
    void Setup(class APalCharacter* TargetPal);
    void SetAnchorGoal();
    void UpdateWireMesh();
    void FixMonsterInSphere();
    void CaptureEffect(FPalDeadInfo DeadInfo);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CaptureWire(int32 EntryPoint);
};

#endif
