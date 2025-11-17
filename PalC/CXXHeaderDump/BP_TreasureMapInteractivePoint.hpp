#ifndef UE4SS_SDK_BP_TreasureMapInteractivePoint_HPP
#define UE4SS_SDK_BP_TreasureMapInteractivePoint_HPP

class ABP_TreasureMapInteractivePoint_C : public APalTreasureMapInteractivePoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;
    class UStaticMeshComponent* Cone;
    class USceneComponent* DefaultSceneRoot;
    class UNiagaraSystem* PillarFX;
    class UNiagaraComponent* PillarFXComponent;
    TMap<int32, FLinearColor> PillarColorMapByRank;
    double PillarLength;

    void Setup();
    void OnChangedActorLocation();
    void SetVisualByPointDataItem(const FPalPlayerTreasureMapPointDataItem& Item);
    void SetActiveForPlayerInteract(const bool bActive);
    void SetActiveFXInLocal(bool Condition);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureMapInteractivePoint(int32 EntryPoint);
};

#endif
