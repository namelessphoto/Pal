#ifndef UE4SS_SDK_WBP_QuestTrackingIconCanvas_HPP
#define UE4SS_SDK_WBP_QuestTrackingIconCanvas_HPP

class UWBP_QuestTrackingIconCanvas_C : public UPalUserWidget
{
    class UCanvasPanel* CanvasPanel_27;
    TMap<class FGuid, class UWBP_PalQuestTrackingIcon_C*> IconMap;

    void OnRemoveLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void OnAddLocation(const FGuid& LocationId, class UPalLocationBase* Location);
    void Setup();
};

#endif
