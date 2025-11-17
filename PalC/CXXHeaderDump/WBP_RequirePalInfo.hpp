#ifndef UE4SS_SDK_WBP_RequirePalInfo_HPP
#define UE4SS_SDK_WBP_RequirePalInfo_HPP

class UWBP_RequirePalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple_Path;                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Electric_EnableToDisable;                             // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_PathFailed;                                            // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_RequirePal;                                            // 0x02A0 (size: 0x8)
    class UCanvasPanel* ElectricPower;                                                // 0x02A8 (size: 0x8)
    class UImage* Image_128;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_CautionIcon;                                                  // 0x02B8 (size: 0x8)
    class UImage* Line;                                                               // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Electric;                                          // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PathFailed;                                        // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireGenus;                                      // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireType;                                       // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability;                            // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability_Lv;                         // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireWorkSuitability_LvNum;                      // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Transport;                                         // 0x0300 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x0308 (size: 0x8)
    FDataTableRowHandle RequireGenusMSGID;                                            // 0x0310 (size: 0x10)
    FDataTableRowHandle RequireTypeMSGID;                                             // 0x0320 (size: 0x10)
    FDataTableRowHandle PowerOnlineMSGID;                                             // 0x0330 (size: 0x10)
    FDataTableRowHandle PowerOfflineMSGID;                                            // 0x0340 (size: 0x10)
    bool PowerSufficient;                                                             // 0x0350 (size: 0x1)
    FDataTableRowHandle RequireBulletMSGID;                                           // 0x0358 (size: 0x10)
    class UPalMapObjectDefenseBulletLauncherModel* Launcher Model;                    // 0x0368 (size: 0x8)
    bool BulletRequire;                                                               // 0x0370 (size: 0x1)
    bool EnergyRequire;                                                               // 0x0371 (size: 0x1)
    bool isDisplayedDetail;                                                           // 0x0372 (size: 0x1)
    class APalMapObject* OwnerMapObject;                                              // 0x0378 (size: 0x8)
    FTimerHandle TimerDisplayCheckPath;                                               // 0x0380 (size: 0x8)

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
}; // Size: 0x388

#endif
