#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP

class UWBP_MainMenu_PalSkillInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Info;                           // 0x0280 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_SubInfo;                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_KeyGuide_ChangeWaza;                              // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_KeyGuide_RemoveWaza;                              // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Status;                                       // 0x02A8 (size: 0x8)
    class UImage* Image_Icon_CT;                                                      // 0x02B0 (size: 0x8)
    class UCanvasPanel* SkillInfo;                                                    // 0x02B8 (size: 0x8)
    class UCanvasPanel* SkillInfo_Add_1;                                              // 0x02C0 (size: 0x8)
    class UCanvasPanel* SkillInfo_Add_2;                                              // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum;                                             // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum_1;                                           // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CTNum_2;                                           // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Af;                                  // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Pre;                                 // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum;                                           // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum_1;                                         // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* TextPowerNum_2;                                         // 0x0308 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement;          // 0x0310 (size: 0x8)
    FDataTableRowHandle PartnerMsgID;                                                 // 0x0318 (size: 0x10)
    FDataTableRowHandle PassiveMsgID;                                                 // 0x0328 (size: 0x10)
    FDataTableRowHandle FoodMsgID;                                                    // 0x0338 (size: 0x10)
    FDataTableRowHandle HungerMsgID;                                                  // 0x0348 (size: 0x10)
    FDataTableRowHandle PalSkillMsgID;                                                // 0x0358 (size: 0x10)
    FDataTableRowHandle EquipMsgID;                                                   // 0x0368 (size: 0x10)
    int32 EquipValue;                                                                 // 0x0378 (size: 0x4)
    FDataTableRowHandle EquipPassiveMsgID;                                            // 0x0380 (size: 0x10)
    FDataTableRowHandle WeaponEffectMsgID;                                            // 0x0390 (size: 0x10)
    FDataTableRowHandle FriendShipMsgID;                                              // 0x03A0 (size: 0x10)

    void MakeFriendshipRateText(int32 FriendshipEffect, FText& Text);
    void MakeWeaponEffectText(EPalPassiveSkillEffectType EffectType, class UPalIndividualCharacterParameter* IndividualParameter, FText& OutText);
    void GetPlayerEquipPassiveFormat(class UPalIndividualCharacterParameter* individualParam, EPalPassiveSkillEffectType EffectType, bool IsPlayer, FText& Text);
    void PlayerEquipInfoFormat(TEnumAsByte<E_PalUIStatusDIsplayParameter> Status, bool IsPlayer, FText& FormatText);
    void ConvertToFoodRate(TEnumAsByte<E_PalUIStatusDIsplayParameter> displayParameter, EPalFoodStatusEffectType& FoodEffect);
    void WeightInfoFormat(FText Name, double PassiveBuffed, FText& FormatText);
    void SetSkillInfo(bool ShowChangeWazaKeyGuide, bool ShowRemoveWazaKeyGuide, EPalWazaID WazaID);
    void SubInfoFormatAddive(FText Name, double Value, FText& FormatText);
    void SubInfoFormat(FText Name, double Value, FText& FormatText);
    void SetCommonInfo(FText Title, FText Info, FText SubInfo);
    void SetStatusInfo(FText Title, FText Desc, class UPalIndividualCharacterParameter* individualParam, TEnumAsByte<E_PalUIStatusDIsplayParameter> StatusType, bool IsPlayer);
    void ExecuteUbergraph_WBP_MainMenu_PalSkillInfo(int32 EntryPoint);
}; // Size: 0x3B0

#endif
