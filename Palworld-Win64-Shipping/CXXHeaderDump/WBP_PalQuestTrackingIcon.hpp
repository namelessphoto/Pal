#ifndef UE4SS_SDK_WBP_PalQuestTrackingIcon_HPP
#define UE4SS_SDK_WBP_PalQuestTrackingIcon_HPP

class UWBP_PalQuestTrackingIcon_C : public UWBP_LoupeBase_C
{
    class UWBP_NPC_OverheadQuest_C* WBP_NPC_OverheadQuest;
    TSoftObjectPtr<UPalLocationPoint_QuestBase> SoftLocationData;
    double HeadOffset;
    FName MyQuestId;

    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetTargetWorldLocation(FVector& outVector);
    void Setup(TSoftObjectPtr<UPalLocationPoint_QuestBase> SoftQuestLocation);
};

#endif
