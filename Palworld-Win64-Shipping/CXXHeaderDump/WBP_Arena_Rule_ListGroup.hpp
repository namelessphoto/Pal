#ifndef UE4SS_SDK_WBP_Arena_Rule_ListGroup_HPP
#define UE4SS_SDK_WBP_Arena_Rule_ListGroup_HPP

class UWBP_Arena_Rule_ListGroup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Boss;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Duplicate;
    class UWBP_Arena_RuleListContent_1_C* WBP_Arena_RuleListContent_Element;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Human;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Legend;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_LevelSync;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PalDamage;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PalRestrict;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_PlayerDamage;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Ride;
    class UWBP_Arena_RuleListContent_0_C* WBP_Arena_RuleListContent_Time;
    bool SomethingChanged;
    FPalArenaRule CurrentRule;
    FWBP_Arena_Rule_ListGroup_COnRuleUpdated OnRuleUpdated;
    void OnRuleUpdated(FPalArenaRule NewRule);
    FWBP_Arena_Rule_ListGroup_COnRestrictPalClicked OnRestrictPalClicked;
    void OnRestrictPalClicked();
    TArray<class UWBP_Arena_RuleListContent_0_C*> SettingContents;
    class UCommonButtonBase* LastHoveredConten;
    FWBP_Arena_Rule_ListGroup_CToggleLevelSyncInfo ToggleLevelSyncInfo;
    void ToggleLevelSyncInfo(bool Show);

    void OnTimeLimitDamageChanged(double Value);
    void OnHumanRestrictChanged(bool IsOn);
    void OnElementRestrictChanged(TArray<EPalElementType>& Elements);
    void OnPalRestrictClicked();
    void OnDuplicateRestrictChanged(bool IsOn);
    void OnRideRestrictChanged(bool IsOn);
    void OnLegendRestrictChanged(bool IsOn);
    void OnBossRestrictChanged(bool IsOn);
    void OnPalDamageChanged(double Value);
    void OnPlayerDamageChanged(double Value);
    void OnLevelSyncChanged(bool IsOn);
    void GetDesiredFocusTarget(class UWidget*& Widget);
    void Setup(FPalArenaRule ArenaRule, bool RuleEditable);
    void OnInitialized();
    void OnContentHovered(class UWidget* Button);
    void OnContentUnhovered();
    void ExecuteUbergraph_WBP_Arena_Rule_ListGroup(int32 EntryPoint);
    void ToggleLevelSyncInfo__DelegateSignature(bool Show);
    void OnRestrictPalClicked__DelegateSignature();
    void OnRuleUpdated__DelegateSignature(FPalArenaRule NewRule);
};

#endif
