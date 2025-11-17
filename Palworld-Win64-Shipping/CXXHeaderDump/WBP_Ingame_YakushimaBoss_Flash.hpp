#ifndef UE4SS_SDK_WBP_Ingame_YakushimaBoss_Flash_HPP
#define UE4SS_SDK_WBP_Ingame_YakushimaBoss_Flash_HPP

class UWBP_Ingame_YakushimaBoss_Flash_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Flash_Short;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UImage* Image_Center;
    class UImage* Image_Center_1;
    class UImage* Image_Screen;

    void Finished_210B6F264997AF0AD965E28D88CE5F05();
    void Finished_28BE893946A9BC98BF540F83CD0635D6();
    void Finished_42AFC3034902322F2229B38C91A3105A();
    void Finished_FA3E54DC4151F332223970A9B4D94773();
    void PlaySuccessSeuquence(class UWBP_BossBattle_BattleInfo_C* Widget, bool SkipWhiteout);
    void ExecuteUbergraph_WBP_Ingame_YakushimaBoss_Flash(int32 EntryPoint);
};

#endif
