#ifndef UE4SS_SDK_WBP_MainMenu_Pal_FoodAmount_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_FoodAmount_HPP

class UWBP_MainMenu_Pal_FoodAmount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_0;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_1;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_2;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_3;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_4;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_5;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_6;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_7;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_8;
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_9;
    TArray<class UWBP_MainMenu_Pal_FoodAmountIcon_C*> IconArray;

    void SetFoodAmount(int32 FoodAmount);
    void OnInitialized();
    void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount(int32 EntryPoint);
};

#endif
