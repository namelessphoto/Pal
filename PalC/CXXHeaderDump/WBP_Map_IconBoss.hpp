#ifndef UE4SS_SDK_WBP_Map_IconBoss_HPP
#define UE4SS_SDK_WBP_Map_IconBoss_HPP

class UWBP_Map_IconBoss_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Boss;                                             // 0x0460 (size: 0x8)
    class UImage* Icon_EnemyCamp;                                                     // 0x0468 (size: 0x8)
    class UImage* Icon_Frame;                                                         // 0x0470 (size: 0x8)
    class UImage* Icon_HumanBoss;                                                     // 0x0478 (size: 0x8)
    class UImage* Icon_Oilrig;                                                        // 0x0480 (size: 0x8)
    class UImage* Image_ClearMark;                                                    // 0x0488 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0490 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0498 (size: 0x8)
    bool Is Defeated;                                                                 // 0x04A0 (size: 0x1)
    FPalSpawnerOneTribeInfo Spawner Info;                                             // 0x04A4 (size: 0x20)
    FName Character Id;                                                               // 0x04C4 (size: 0x8)
    int32 Level;                                                                      // 0x04CC (size: 0x4)
    FName Spawner Id;                                                                 // 0x04D0 (size: 0x8)
    FName Original Character Id;                                                      // 0x04D8 (size: 0x8)
    FName Original Spawner Id;                                                        // 0x04E0 (size: 0x8)
    FVector SpawnerPosition;                                                          // 0x04E8 (size: 0x18)

    void GetLocationPosition(FVector& LocationPosition);
    void UpdateBossIconState();
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetOilrig(int32 Level, FName Character Id);
    void SetBoss(FName CharacterID, int32 Level, FName Spawner Id, FName OriginalCharacterId, FName OriginalSpawnerId, FVector Location);
    void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
}; // Size: 0x500

#endif
