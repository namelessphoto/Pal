#ifndef UE4SS_SDK_WBP_MapFilter_Win_HPP
#define UE4SS_SDK_WBP_MapFilter_Win_HPP

class UWBP_MapFilter_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_1;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_2;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_3;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_4;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_5;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_6;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_7;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_8;
    class UWBP_MapFilter_Content_C* WBP_MapFilter_Content_9;
    TArray<class UWBP_MapFilter_Content_C*> Filters;
    TMap<class EPalLocationType, class FDataTableRowHandle> FilterMsgMap;
    FWBP_MapFilter_Win_COnFilterChanged OnFilterChanged;
    void OnFilterChanged(EPalLocationType FilterMap, bool IsEnable);

    void Construct();
    void ChangeFilter(EPalLocationType LocationType, bool IsEnable);
    void ForceFTEnable(bool IsEnable);
    void ExecuteUbergraph_WBP_MapFilter_Win(int32 EntryPoint);
    void OnFilterChanged__DelegateSignature(EPalLocationType FilterMap, bool IsEnable);
};

#endif
