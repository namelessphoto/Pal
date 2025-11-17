#ifndef UE4SS_SDK_BP_ThrowCaptureObjectBase_HPP
#define UE4SS_SDK_BP_ThrowCaptureObjectBase_HPP

class ABP_ThrowCaptureObjectBase_C : public ABP_ThrowObjectBase_C
{
    FBP_ThrowCaptureObjectBase_COnCaptureStarted OnCaptureStarted;
    void OnCaptureStarted(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* tagretHandle, bool isBonus, bool bCritical);
    int32 CaptureLevel;

    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void GetCaptureLevel(int32& Level);
    void SetCaptureLevel(int32 Level);
    void OnCaptureStarted__DelegateSignature(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* tagretHandle, bool isBonus, bool bCritical);
};

#endif
