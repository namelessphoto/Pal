#ifndef UE4SS_SDK_WBP_MainMenu_Pal_StatusElement_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_StatusElement_HPP

class UWBP_MainMenu_Pal_StatusElement_C : public UUserWidget
{
    class UImage* Image_Element;
    class UBP_PalTextBlock_C* Text_ElementTypeName;
    TMap<class EPalElementType, class TSoftObjectPtr<UTexture2D>> TextureMap;

    void Setup(EPalElementType ElementType);
};

#endif
