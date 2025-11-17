#ifndef UE4SS_SDK_WBP_CompassIconBase_HPP
#define UE4SS_SDK_WBP_CompassIconBase_HPP

class UWBP_CompassIconBase_C : public UPalUICompassIconBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector Target Location;
    FGuid MyLocationID;
    float HiddenDistance;
    double CurrentDistance;
    bool bDistanceXY;

    void GetLocation(class UPalLocationBase*& Location);
    void PostSetup();
    void UpdateDistance();
    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
    void UpdateVisibility(bool& InDistance);
    void SetLocationId(FGuid LocationId);
    void SetTargetLocation(FVector TargetLocation, bool bInDistanceXY);
    void Get Offset Value(double& offSetValue);
    void SetDisplayDistance(double Length);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint);
};

#endif
