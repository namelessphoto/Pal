#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_info_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_info_HPP

class UWBP_IngameMenuConstruction_info_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_4;
    class UImage* Dot_5;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_278;
    class UBP_PalRichTextBlock_C* RichText_BuildObjectDesc;
    class UBP_PalTextBlock_C* Text_ManMonth_Value;
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem;
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1;
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2;
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3;

    void Get Useable Material Item Num(FName ItemId, int32& Num);
    void SetMaterialInfo(class UWBP_IngameMenuConstruction_InfoItem_C* Widget, FName ID, int32 NeedNum);
    void Set Build Object Data(FPalBuildObjectData BuildObjectData);
};

#endif
