#ifndef UE4SS_SDK_WBP_BattleEntry_MemberList_HPP
#define UE4SS_SDK_WBP_BattleEntry_MemberList_HPP

class UWBP_BattleEntry_MemberList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Listup;
    class UBP_PalTextBlock_C* BP_PlayerName;
    class UImage* Image_HostIcon;
    class UBP_PalTextBlock_C* Text_LvNum;
    class UBP_PalTextBlock_C* Text_LvTitle;

    void OnUpdateLevel_Binded(int32 NewLevel);
    void UpdatePlayerName();
    void OnUpdateNickName_Binded(FString NewNickName);
    void Construct();
    void SetPlayerInfo(FString PlayerName, int32 PlayLv, bool IsHost, class UPalIndividualCharacterHandle* targetHandle);
    void SetValidation(bool IsValid);
    void OnInitialized();
    void ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint);
};

#endif
