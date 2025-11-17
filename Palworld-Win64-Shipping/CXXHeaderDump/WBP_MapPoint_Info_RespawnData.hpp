#ifndef UE4SS_SDK_WBP_MapPoint_Info_RespawnData_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_RespawnData_HPP

class UWBP_MapPoint_Info_RespawnData_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UImage* Image_Map_Mark_0;
    class UImage* Image_Map_Mark_1;
    class UImage* Image_Map_Mark_2;
    class UImage* Image_Map_Mark_3;
    class UImage* Image_Map_Mark_4;
    FDataTableRowHandle MsgID;
    TArray<class UImage*> Stars;

    void Construct();
    void SetRank(int32 Rank);
    void ExecuteUbergraph_WBP_MapPoint_Info_RespawnData(int32 EntryPoint);
};

#endif
