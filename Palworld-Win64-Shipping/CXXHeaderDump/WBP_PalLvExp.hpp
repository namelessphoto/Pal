#ifndef UE4SS_SDK_WBP_PalLvExp_HPP
#define UE4SS_SDK_WBP_PalLvExp_HPP

class UWBP_PalLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Friendship_Favorite;
    class UWidgetAnimation* Anm_Friendship_RankUp;
    class UWidgetAnimation* Anm_GetSkill;
    class UWidgetAnimation* Anm_LVUP;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UCanvasPanel* Canvas_FriendshipRank;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_40;
    class UImage* Image_Base_Friendship;
    class UImage* Image_Icon_FavoriteLock;
    class UImage* Image_SkillEffBase;
    class UProgressBar* ProgressBar_Exp;
    class UBP_PalTextBlock_C* Text_AddExp;
    class UBP_PalTextBlock_C* Text_Favorite;
    class UBP_PalTextBlock_C* Text_FriendshipRankNum;
    class UBP_PalTextBlock_C* Text_LvUP;
    class UBP_PalTextBlock_C* Text_RankUp;
    class UBP_PalTextBlock_C* Text_Skill;
    class UWBP_LvNum_C* WBP_LvNum;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;
    double LevelUpAnimeDelay;
    double NewMoveAnimeDelay;
    double closeAnimeDelay;
    double FavoriteAnimeDelay;
    double FriendshipRankupAnimeDelay;
    FTimerHandle LevelUpAnimeTimerHandle;
    FTimerHandle NewMoveAnimeTimerHandle;
    FTimerHandle FriendshipRankupAnimeTimerHandle;
    FTimerHandle FavoriteAnimeTimerHandle;
    FTimerHandle CloseAnimeTimerHandle;
    bool IsLevelUp;
    bool IsNewMove;
    bool isDisplaying;
    int32 LastLevel;
    FDataTableRowHandle LevelUpMsgID;
    FDataTableRowHandle NewMoveMsgID;
    FName CachedCharacterID;
    int64 StackExp;
    TArray<EPalWazaID> NewWazaIDArray;
    int32 ReservedDisplayFriendshipRank;
    bool bChangedFavoriteByFriendshipRank;
    bool bReservedRankupAnime;
    double CloseDelay_FriendshipRankup;

    void Reset();
    void Unbind();
    void OnTriggerFavoriteAnime();
    void SetupFavoriteAnimeTimer();
    void OnTriggerFriendshipRankupAnime();
    void SetupFriendshipRankupAnimeTimer();
    void On Changed Friendship Rank Binded(int32 NewRank, int32 OldRank, bool FavoriteChanged);
    void OnTriggerCloseAnime();
    void OnTriggerNewMoveAnime();
    void OnTriggerLevelUpAnime();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnUpdateSlot(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
    void On Update Level Binded(int32 NewLevel);
    void On Update Exp Binded(int64 addExp, int64 oldExp, double nowExpRate);
    void SetupCloseAnimeTimer(double CloseDelay);
    void SetupNewMoveAnimeTimer();
    void SetupLevelUpAnimeTimer();
    void ClearAnimeTimer();
    void Set Level(int32 Level);
    void Set Add Exp(int64 addExp);
    void Set Exp Percent(double Percent);
    void AnmEvent_Close_UI();
    void AnmEvent_Levelup();
    void AnmEvent_NewMove(EPalWazaID newWazaID);
    void AnmEvent_Open_UI();
    void AnmEvent_FriendshipRankup();
    void AnmEvent_Favorite();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint);
};

#endif
