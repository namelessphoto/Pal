#ifndef UE4SS_SDK_WBP_Reticle_Pal_HPP
#define UE4SS_SDK_WBP_Reticle_Pal_HPP

class UWBP_Reticle_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UWidgetAnimation* Anm_Loop;
    class UImage* Icon;
    class UImage* Reticle_00;
    class UImage* Reticle_01;
    class UImage* Reticle_02;
    class UImage* ReticleCircle_03;
    class UBP_PalTextBlock_C* Text_AssignableDetail;
    class UBP_PalTextBlock_C* Text_AssignableTargetObjectName;
    class UBP_PalTextBlock_C* Text_OtomoDead;
    class UVerticalBox* VerticalBox_122;
    FDataTableRowHandle AssignableMsgId;
    FDataTableRowHandle UnassignableMsgId;
    FDataTableRowHandle DeadPalThrowMsgID;

    void SetThrowableableDetail(FPalUIAimReticleMapObjectThrowableData throwableData);
    void SetOtomoDeadDetail(class UPalIndividualCharacterParameter* TargetIndividualParameter);
    void SetAssignableDetail(FPalUIAimReticleMapObjectAssignableData assignableData);
    void SetVisibilityAssignableDetail(ESlateVisibility NewVisibility);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Reticle_Pal(int32 EntryPoint);
};

#endif
