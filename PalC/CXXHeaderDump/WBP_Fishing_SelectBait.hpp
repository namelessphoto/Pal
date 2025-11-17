#ifndef UE4SS_SDK_WBP_Fishing_SelectBait_HPP
#define UE4SS_SDK_WBP_Fishing_SelectBait_HPP

class UWBP_Fishing_SelectBait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_In;
    class UHorizontalBox* HorizontalBox_0;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_NoItem;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_1;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_2;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_3;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_4;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_5;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_6;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_7;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_8;
    class UWBP_Fishing_SelectBait_Item_C* WBP_Fishing_SelectBait_Item_9;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_0;
    FName SelectStaticItemId;
    TArray<class UWBP_Fishing_SelectBait_Item_C*> SelectBaitList;
    double ItemSize;
    double CurrentPosX;
    double DefaultPosX;
    int32 MaxIndex;
    int32 CurrentIndex;
    double MoveStartPosX;
    double MoveEndPosX;
    double MoveTimer;
    double MoveDuration;
    double MoveAlpha;

    void ChangeSelect(int32 NewIndex);
    void OnSelected();
    void SetVisibleItems(bool IsVisible);
    void Setup(TArray<FPalStaticItemIdAndNum>& ItemArray, int32 SelectIndex);
    void AnmEvent_In();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Fishing_SelectBait(int32 EntryPoint);
};

#endif
