#ifndef UE4SS_SDK_WBP_Ingame_Compass_HPP
#define UE4SS_SDK_WBP_Ingame_Compass_HPP

class UWBP_Ingame_Compass_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Center;
    class UImage* CompassBase;
    class UCanvasPanel* IconCanvas;
    class UMaterialInstanceDynamic* CompassMaterial;
    TMap<class FGuid, class UWBP_CompassIconBase_C*> CreatedIconMap;
    TArray<FGuid> VisibleIconIds;
    TMap<class EPalLocationType, class TSubclassOf<UWBP_CompassIconBase_C>> IconWBPMap;
    TSubclassOf<class UWBP_CompassIconBase_C> wbpIconBaseClass;
    TArray<class UWBP_IngameCompass_DeathMark_C*> DeathMarks;
    TMap<class UPalLocationPoint*, class FGuid> DeathMarkMap;
    TMap<class FGuid, class UWBP_IngameCompass_CustomMarker_C*> CustomMarkerMap;
    TArray<FGuid> VisibleMarkerIds;

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
};

#endif
