#ifndef UE4SS_SDK_WBP_PalElementIcon_HPP
#define UE4SS_SDK_WBP_PalElementIcon_HPP

class UWBP_PalElementIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon_Element;
    TMap<class EPalElementType, class UTexture2D*> IconMap;
    TMap<class EPalElementType, class UTexture2D*> IconMap_L;
    bool isLargeTexture;

    void Clear();
    void SetElement(EPalElementType ElementType);
    void Construct();
    void ExecuteUbergraph_WBP_PalElementIcon(int32 EntryPoint);
};

#endif
