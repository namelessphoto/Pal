#ifndef UE4SS_SDK_WBP_Map_IconBoss_HPP
#define UE4SS_SDK_WBP_Map_IconBoss_HPP

class UWBP_Map_IconBoss_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_Boss;
    class UImage* Icon_EnemyCamp;
    class UImage* Icon_Frame;
    class UImage* Icon_HumanBoss;
    class UImage* Icon_Oilrig;
    class UImage* Image_ClearMark;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    bool Is Defeated;
    FPalSpawnerOneTribeInfo Spawner Info;
    FName Character Id;
    int32 Level;
    FName Spawner Id;
    FName Original Character Id;
    FName Original Spawner Id;
    FVector SpawnerPosition;

    void GetLocationPosition(FVector& LocationPosition);
    void UpdateBossIconState();
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetOilrig(int32 Level, FName Character Id);
    void SetBoss(FName CharacterID, int32 Level, FName Spawner Id, FName OriginalCharacterId, FName OriginalSpawnerId, FVector Location);
    void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
};

#endif
