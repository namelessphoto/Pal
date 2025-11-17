#ifndef UE4SS_SDK_WBP_RequirePalInfo_HPP
#define UE4SS_SDK_WBP_RequirePalInfo_HPP

class UWBP_RequirePalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple_Path;
    class UWidgetAnimation* Anm_Electric_EnableToDisable;
    class UImage* Base;
    class UCanvasPanel* Canvas_PathFailed;
    class UCanvasPanel* Canvas_RequirePal;
    class UCanvasPanel* ElectricPower;
    class UImage* Image_128;
    class UImage* Image_CautionIcon;
    class UImage* Line;
    class UBP_PalTextBlock_C* Text_Electric;
    class UBP_PalTextBlock_C* Text_PathFailed;
    class UBP_PalTextBlock_C* Text_RequireGenus;
    class UBP_PalTextBlock_C* Text_RequireType;
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability;
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability_Lv;
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability_LvNum;
    class UBP_PalTextBlock_C* Text_Transport;
    class UWBP_IconPalWork_C* WBP_IconPalWork;
    FDataTableRowHandle RequireGenusMSGID;
    FDataTableRowHandle RequireTypeMSGID;
    FDataTableRowHandle PowerOnlineMSGID;
    FDataTableRowHandle PowerOfflineMSGID;
    bool PowerSufficient;
    FDataTableRowHandle RequireBulletMSGID;
    class UPalMapObjectDefenseBulletLauncherModel* Launcher Model;
    bool BulletRequire;
    bool EnergyRequire;
    bool isDisplayedDetail;
    class APalMapObject* OwnerMapObject;
    FTimerHandle TimerDisplayCheckPath;

    void Play Path Animation(bool bToDetails, bool bFinishImmediately);
    bool ShouldDisplayPathDetail();
    void OnChangeRegisteredMapObjectCannotApproach(class UPalMapObjectWorkeeModule* Module);
    void OnReadyRegisteredMapObjectWorkeeModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnReadyRegisteredMapObjectConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void RegisterOwnerMapObject(class APalMapObject* OwnerMapObject);
    void UpdatePowerOrBulletRequireDisplay();
    void UpdateBulletRequire(int32 BulletNum);
    void SetupBulletRequire(class UPalMapObjectDefenseBulletLauncherModel* LauncherModel);
    void SetupPowerSuffcient(class UPalMapObjectEnergyModule* Module);
    void Update Power Suffcient(class UPalMapObjectEnergyModule* Module);
    void Update Display(class UPalWorkBase* Work, EPalWorkSuitability WorkSuitability, int32 RequireRank);
    void Set Work Suitability(EPalWorkSuitability WorkSuitability, int32 RequireRank);
    void SetWarning_Genus_Type(FText genusNames, FText typeNames);
    void Construct();
    void DisplayCheckPath();
    void Destruct();
    void ExecuteUbergraph_WBP_RequirePalInfo(int32 EntryPoint);
};

#endif
