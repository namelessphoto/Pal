#ifndef UE4SS_SDK_BP_SnapModeFX_HPP
#define UE4SS_SDK_BP_SnapModeFX_HPP

class ABP_SnapModeFX_C : public APalSnapModeFX
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Laser;
    class UStaticMeshComponent* LaserRoot;
    class UStaticMeshComponent* BoxEffect;
    class USceneComponent* DefaultSceneRoot;
    double BoxDefaultSize;
    double LaserDefaultSize;
    double CenterSnapEffectOffsetZ;
    FVector OriginLineWorldScale;
    double DefaultLineScaleXY;
    bool IsSnapMode;

    void Hide();
    void ShowCenterSnap(FVector Location, FRotator Rotation, FVector BoxExtent, FVector SnapStart, FVector SnapEnd, bool IsAttachWall);
    void ShowSnap(FVector Location, FRotator Rotation, FVector BoxExtent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SnapModeFX(int32 EntryPoint);
};

#endif
