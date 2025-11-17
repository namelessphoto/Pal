#ifndef UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP
#define UE4SS_SDK_WBP_PalSkill_KeyGuide_HPP

class UWBP_PalSkill_KeyGuide_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_1;
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_2;
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_3;
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_Aim;
    class UWBP_PalSkillEntry_C* WBP_PalSkillEntry_RideSkill;
    TArray<class UWBP_PalSkillEntry_C*> SkillEntryArray;
    class UPalShooterComponent* CurrentShooter;
    FDataTableRowHandle ShootMsgID;
    FDataTableRowHandle FlyMsgID;
    TMap<int32, UPalActiveSkill*> CurrentSkillMap;
    class APalCharacter* As Pal Character;
    TSoftObjectPtr<APalCharacter> SoftRideCharacter;
    bool HasAdditionalRidingSkill;

    void OnPlaySkillFail();
    void OnUpdateEquipWaza(class UPalIndividualCharacterParameter* IndividualParameter);
    void GetRideCharacterParameter(class UPalIndividualCharacterParameter*& IndividualParameter);
    void UpdateSkillInfo();
    void Hide();
    void OnGetOff(class AActor* RideActor);
    void OnRide(class AActor* RideActor);
    void Setup();
    void OnInitialized();
    void StartAim();
    void EndAim();
    void Destruct();
    void ExecuteUbergraph_WBP_PalSkill_KeyGuide(int32 EntryPoint);
};

#endif
