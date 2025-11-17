#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_HPP

class UWBP_WorkerRadialMenu_C : public UWBP_CommonRadialMenuBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName CameraModName;
    FWBP_WorkerRadialMenu_COnSelectedMenu OnSelectedMenu;
    void OnSelectedMenu(EPalWorkerRadialMenuResult Result);
    FDataTableRowHandle MsgID_ShowStatus;
    FDataTableRowHandle MsgID_MoveToOtomo;
    FDataTableRowHandle MsgID_MoveToBox;
    FDataTableRowHandle MsgID_Feed;
    FDataTableRowHandle MsgID_Pet;
    bool IsPalDead;

    void OnSelectedMenu_Internal(int32 Index);
    void CreateContent(FText Text, class UWBP_WorkerRadialMenuContent_C*& createdWidget);
    void SetupContents();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnClosed();
    void ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint);
    void OnSelectedMenu__DelegateSignature(EPalWorkerRadialMenuResult Result);
};

#endif
