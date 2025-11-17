#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillInfo_HPP

class UWBP_MainMenu_PalSkillInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Info;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_SubInfo;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UCanvasPanel* CanvasPanel_KeyGuide_ChangeWaza;
    class UCanvasPanel* CanvasPanel_KeyGuide_RemoveWaza;
    class UHorizontalBox* HorizontalBox_Status;
    class UImage* Image_Icon_CT;
    class UCanvasPanel* SkillInfo;
    class UCanvasPanel* SkillInfo_Add_1;
    class UCanvasPanel* SkillInfo_Add_2;
    class UBP_PalTextBlock_C* Text_CTNum;
    class UBP_PalTextBlock_C* Text_CTNum_1;
    class UBP_PalTextBlock_C* Text_CTNum_2;
    class UBP_PalTextBlock_C* Text_PunishedLevel_Af;
    class UBP_PalTextBlock_C* Text_PunishedLevel_Pre;
    class UBP_PalTextBlock_C* TextPowerNum;
    class UBP_PalTextBlock_C* TextPowerNum_1;
    class UBP_PalTextBlock_C* TextPowerNum_2;
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement;
    FDataTableRowHandle PartnerMsgID;
    FDataTableRowHandle PassiveMsgID;
    FDataTableRowHandle FoodMsgID;
    FDataTableRowHandle HungerMsgID;
    FDataTableRowHandle PalSkillMsgID;
    FDataTableRowHandle EquipMsgID;
    int32 EquipValue;
    FDataTableRowHandle EquipPassiveMsgID;
    FDataTableRowHandle WeaponEffectMsgID;
    FDataTableRowHandle FriendShipMsgID;

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
};

#endif
