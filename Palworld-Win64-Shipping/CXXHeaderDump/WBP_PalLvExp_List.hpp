#ifndef UE4SS_SDK_WBP_PalLvExp_List_HPP
#define UE4SS_SDK_WBP_PalLvExp_List_HPP

class UWBP_PalLvExp_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalLvExp_C* WBP_PalLvExp_0;
    class UWBP_PalLvExp_C* WBP_PalLvExp_1;
    class UWBP_PalLvExp_C* WBP_PalLvExp_2;
    class UWBP_PalLvExp_C* WBP_PalLvExp_3;
    class UWBP_PalLvExp_C* WBP_PalLvExp_4;
    TArray<class UWBP_PalLvExp_C*> ChildList;

    void Setup();
    void Anm_Open_All();
    void Anm_Open(int32 Index);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLvExp_List(int32 EntryPoint);
};

#endif
