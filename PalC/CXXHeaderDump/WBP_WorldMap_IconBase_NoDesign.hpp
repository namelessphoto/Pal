#ifndef UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP
#define UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP

class UWBP_WorldMap_IconBase_NoDesign_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_WorldMap_IconBase_NoDesign_COnHovered OnHovered;
    void OnHovered(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnClicked OnClicked;
    void OnClicked(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FGuid LocationId;
    bool IsCallInternalClickEvent;
    bool IgnoreMask;
    bool IsHiding;
    bool bEnableHideOnZoom;
    bool Is Filtered Out;
    EPalLocationType LocationType;
    bool HidingByZoom;

    void SetupForceVisibility(bool& bChangedVisibility);
    void GetLocationType(EPalLocationType& Type);
    void SetFilterState(TSet<EPalLocationType> FilterSet);
    void UpdateHiddenOnZoom(double NewZoom);
    void GetInvisibleButton(class UWidget*& Button);
    void GetLocationRotation(FQuat& LocationRotation);
    void GetIsHiding(bool& Hiding);
    void SetIsHiding(bool Hiding);
    void IsIgnoreMask(bool& IsIgnore);
    void SetIgnoreMask(bool IsIgnore);
    void SetEnable(bool Enable);
    void OnClicked_Internal();
    void ClickEvent();
    void Setup(class UPalLocationPoint* LocationPoint, FGuid LocationId);
    void GetLocationPosition(FVector& LocationPosition);
    void GetLocationPoint(class UPalLocationPoint*& LocationPoint);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetText(FText& Text);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
};

#endif
