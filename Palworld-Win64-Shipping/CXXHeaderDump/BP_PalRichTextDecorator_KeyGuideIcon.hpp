#ifndef UE4SS_SDK_BP_PalRichTextDecorator_KeyGuideIcon_HPP
#define UE4SS_SDK_BP_PalRichTextDecorator_KeyGuideIcon_HPP

class UBP_PalRichTextDecorator_KeyGuideIcon_C : public UPaRichTextDecorator_KeyGuideIcon
{
    TMap<class FName, class UWidget*> CreatedUIInputKeyGuideWidgets;
    TMap<class FName, class UWidget*> CreatedPlayerInputKeyGuideWidgets;

    class UWidget* CreateWidget(FName KeyGuideActionName, float IconScale, int32 OverrideType);
};

#endif
