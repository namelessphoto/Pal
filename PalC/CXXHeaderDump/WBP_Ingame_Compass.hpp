#ifndef UE4SS_SDK_WBP_Ingame_Compass_HPP
#define UE4SS_SDK_WBP_Ingame_Compass_HPP

class UWBP_Ingame_Compass_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* Center;                                                             // 0x0410 (size: 0x8)
    class UImage* CompassBase;                                                        // 0x0418 (size: 0x8)
    class UCanvasPanel* IconCanvas;                                                   // 0x0420 (size: 0x8)
    class UMaterialInstanceDynamic* CompassMaterial;                                  // 0x0428 (size: 0x8)
    TMap<class FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;                  // 0x0430 (size: 0x50)
    TArray<FGuid> VisibleIconIds;                                                     // 0x0480 (size: 0x10)
    TMap<class EPalLocationType, class TSubclassOf<UWBP_CompassIconBase_C>> IconWBPMap; // 0x0490 (size: 0x50)
    TSubclassOf<class UWBP_CompassIconBase_C> wbpIconBaseClass;                       // 0x04E0 (size: 0x8)
    TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;                         // 0x04E8 (size: 0x10)
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;                         // 0x04F8 (size: 0x50)
    TMap<class FGuid, class UWBP_IngameCompass_CustomMarker_C*> CustomMarkerMap;      // 0x0548 (size: 0x50)
    TArray<FGuid> VisibleMarkerIds;                                                   // 0x0598 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FGuid& MarkerId);
    void Add Custom Marker(const FPalLocationUIData& PalLocationUIData, const FPalCustomMarkerSaveData& PalCustomMarkerSaveData, FGuid LocationId);
    void OnCustomMarkerChanged(FGuid MarkerId);
    void Setup Custom Marker();
    void GetVisibleIcons();
    void Refresh Death Mark(TMap<class FGuid, class UPalLocationBase*> LocationMap);
    void Setup Created Icon Widget(class UWBP_CompassIconBase_C* createdWidget, FGuid LocationId, FPalLocationUIData locationUIData);
    void Update Icon();
    void OnRemovedLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void On Added Location(const FGuid& LocationId, class UPalLocationBase* Location);
    void Update Rotation From Pawn(class APawn* targetPawn);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Setup();
    void ExecuteUbergraph_WBP_Ingame_Compass(int32 EntryPoint);
}; // Size: 0x5A8

#endif
