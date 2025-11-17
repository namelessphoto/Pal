#ifndef UE4SS_SDK_WBP_ConvertItemStatusIndicator_HPP
#define UE4SS_SDK_WBP_ConvertItemStatusIndicator_HPP

class UWBP_ConvertItemStatusIndicator_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalCraftInfo_C* WBP_PalCraftInfo;
    bool isDisplayedDetail;
    bool isValidRecipe;
    double displayDetailRange;
    FTimerHandle LocationCheckTimerHandle;
    bool IsFirstSetup;
    class UPalMapObjectConvertItemModel* Model;

    void OnUpdatedWorkerPal(class UPalWorkBase* Work);
    void CloseDetail();
    void DisplayDetail();
    void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress);
    void OnUpdateProductSlot(class UPalItemSlot* Slot);
    void UpdateProductNum(class UPalMapObjectConvertItemModel* Model);
    void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
    void Initialize();
    void OnSetup();
    void Construct();
    void CheckLocationEvent();
    void Destruct();
    void ExecuteUbergraph_WBP_ConvertItemStatusIndicator(int32 EntryPoint);
};

#endif
