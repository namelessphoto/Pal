#ifndef UE4SS_SDK_WBP_PalCharacterIconBase_HPP
#define UE4SS_SDK_WBP_PalCharacterIconBase_HPP

class UWBP_PalCharacterIconBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_PalCharacterIconBase_COnLoadedTexture OnLoadedTexture;
    void OnLoadedTexture(class UTexture2D* loadedTexture);
    FWBP_PalCharacterIconBase_COnStartLoadTexture OnStartLoadTexture;
    void OnStartLoadTexture();
    FWBP_PalCharacterIconBase_COnSetEmpty OnSetEmpty;
    void OnSetEmpty();
    TSoftObjectPtr<UPalIndividualCharacterParameter> BindParameter;

    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter SaveParam);
    void SetupBySoftTexture(TSoftObjectPtr<UTexture2D> Texture);
    void OnUpdateSkinName(const FName& NewSkinName);
    void UnbindEvent();
    void SetupByParameter(class UPalIndividualCharacterParameter* Parameter);
    void SetupByHandle(class UPalIndividualCharacterHandle* IndividualHandle);
    void SetEmpty();
    void Setup(FName CharacterID);
    void OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded);
    void LoadIconEvent_Internal(TSoftObjectPtr<UTexture2D> SoftTexture);
    void Destruct();
    void ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint);
    void OnSetEmpty__DelegateSignature();
    void OnStartLoadTexture__DelegateSignature();
    void OnLoadedTexture__DelegateSignature(class UTexture2D* loadedTexture);
};

#endif
