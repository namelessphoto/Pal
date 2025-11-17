#ifndef UE4SS_SDK_WBP_IngameSmesTop_HPP
#define UE4SS_SDK_WBP_IngameSmesTop_HPP

class UWBP_IngameSmesTop_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close_Lower;
    class UWidgetAnimation* Anm_Open_Lower;
    class UWidgetAnimation* Anm_Close_Upper;
    class UWidgetAnimation* Anm_Open_Upper;
    class UBP_PalTextBlock_C* BPPalTextBlock_Smes_01;
    class UCanvasPanel* Canvas_Lower;
    class UCanvasPanel* CanvasPanel_Upper;
    class UCanvasPanel* PlayerLVUP;
    class UWBP_LvNum_C* WBP_LvNum;
    double levelUpDisplayTime;
    double openDelayTime;
    FDataTableRowHandle TechnologyTextHandle;
    bool IsLevelUpAnimePlaying;
    bool IsOpened;

    void On Player Level Up(int32 DisplayLevel);
    void OnUpdateTechnologyPoint(int32 TechnologyPoint);
    void Setup();
    void PlayUnlockedMap(FName regionId);
    void Finished_A1B7BD03455E913C4335A7BF7BD61956();
    void Finished_5BC595C649AA650883AA559F46C6DEC4();
    void Finished_1CC36CF5434F95CC47067C9022BCAAAA();
    void Finished_619BCE1746569C3505CAB3B66FD0832F();
    void AnmEvent_Levelup();
    void AnmEvent_UpdateTechnologyPoint();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameSmesTop(int32 EntryPoint);
};

#endif
