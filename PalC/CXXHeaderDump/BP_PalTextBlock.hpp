#ifndef UE4SS_SDK_BP_PalTextBlock_HPP
#define UE4SS_SDK_BP_PalTextBlock_HPP

class UBP_PalTextBlock_C : public UPalTextBlockBase
{
    TMap<class UDataTable*, class EPalLocalizeTextCategory> CategryMap_ForViewportGameDebug;

    bool BP_ReflectText();
};

#endif
