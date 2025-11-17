#ifndef UE4SS_SDK_WBP_PalItemIconBase_HPP
#define UE4SS_SDK_WBP_PalItemIconBase_HPP

class UWBP_PalItemIconBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_PalItemIconBase_COnLoadedTexture OnLoadedTexture;
    void OnLoadedTexture(class UTexture2D* loadedTexture);
    FWBP_PalItemIconBase_COnStartLoadTexture OnStartLoadTexture;
    void OnStartLoadTexture();
    FWBP_PalItemIconBase_COnSetEmpty OnSetEmpty;
    void OnSetEmpty();
    FWBP_PalItemIconBase_COnEnableBPIcon OnEnableBPIcon;
    void OnEnableBPIcon(TSoftObjectPtr<UTexture2D> Icon);
    FWBP_PalItemIconBase_COnDisableBPIcon OnDisableBPIcon;
    void OnDisableBPIcon();
    FName CurrentItemId;

    void Set BPIcon(FName StaticItemId);
    void SetEmpty();
    void Setup(FName StaticItemId);
    void OnLoaded_4877576D403287D740E132872987B748(class UObject* Loaded);
    void LoadIconEvent_Internal(TSoftObjectPtr<UTexture2D> SoftTexture);
    void ExecuteUbergraph_WBP_PalItemIconBase(int32 EntryPoint);
    void OnDisableBPIcon__DelegateSignature();
    void OnEnableBPIcon__DelegateSignature(TSoftObjectPtr<UTexture2D> Icon);
    void OnSetEmpty__DelegateSignature();
    void OnStartLoadTexture__DelegateSignature();
    void OnLoadedTexture__DelegateSignature(class UTexture2D* loadedTexture);
};

#endif
