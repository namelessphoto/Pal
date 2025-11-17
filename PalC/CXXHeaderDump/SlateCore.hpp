#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FAnalogInputEvent : public FKeyEvent
{
};

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;
    FSlateBrush Hovered;
    FSlateBrush Pressed;
    FSlateBrush Disabled;
    FSlateColor NormalForeground;
    FSlateColor HoveredForeground;
    FSlateColor PressedForeground;
    FSlateColor DisabledForeground;
    FMargin NormalPadding;
    FMargin PressedPadding;
    FSlateSound PressedSlateSound;
    FSlateSound HoveredSlateSound;

};

struct FCaptureLostEvent
{
};

struct FCharacterEvent : public FInputEvent
{
};

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType> CheckBoxType;
    FSlateBrush UncheckedImage;
    FSlateBrush UncheckedHoveredImage;
    FSlateBrush UncheckedPressedImage;
    FSlateBrush CheckedImage;
    FSlateBrush CheckedHoveredImage;
    FSlateBrush CheckedPressedImage;
    FSlateBrush UndeterminedImage;
    FSlateBrush UndeterminedHoveredImage;
    FSlateBrush UndeterminedPressedImage;
    FMargin Padding;
    FSlateBrush BackgroundImage;
    FSlateBrush BackgroundHoveredImage;
    FSlateBrush BackgroundPressedImage;
    FSlateColor ForegroundColor;
    FSlateColor HoveredForeground;
    FSlateColor PressedForeground;
    FSlateColor CheckedForeground;
    FSlateColor CheckedHoveredForeground;
    FSlateColor CheckedPressedForeground;
    FSlateColor UndeterminedForeground;
    FSlateColor BorderBackgroundColor;
    FSlateSound CheckedSlateSound;
    FSlateSound UncheckedSlateSound;
    FSlateSound HoveredSlateSound;

};

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;
    FSlateSound PressedSlateSound;
    FSlateSound SelectionChangeSlateSound;
    FMargin ContentPadding;
    FMargin MenuRowPadding;

};

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;
    FSlateBrush DownArrowImage;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateBrush MenuBorderBrush;
    FMargin MenuBorderPadding;
    FMargin ContentPadding;
    FMargin DownArrowPadding;
    TEnumAsByte<EVerticalAlignment> DownArrowAlign;

};

struct FCompositeFallbackFont
{
    FTypeface Typeface;
    float ScalingFactor;

};

struct FCompositeFont
{
    FTypeface DefaultTypeface;
    FCompositeFallbackFont FallbackTypeface;
    TArray<FCompositeSubFont> SubTypefaces;

};

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;
    FString Cultures;

};

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;
    FSlateBrush NormalBrush;
    FSlateBrush ColorOverlayTabBrush;
    FSlateBrush ColorOverlayIconBrush;
    FSlateBrush ForegroundBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush ContentAreaBrush;
    FSlateBrush TabWellBrush;
    FTextBlockStyle TabTextStyle;
    FMargin TabPadding;
    FVector2D IconSize;
    float OverlapWidth;
    FSlateColor FlashColor;
    FSlateColor NormalForegroundColor;
    FSlateColor HoveredForegroundColor;
    FSlateColor ActiveForegroundColor;
    FSlateColor ForegroundForegroundColor;
    float IconBorderPadding;

};

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;
    FSlateBrush BackgroundImageHovered;
    FSlateBrush BackgroundImageFocused;
    FSlateBrush BackgroundImageReadOnly;
    FMargin Padding;
    FTextBlockStyle TextStyle;
    FSlateColor ForegroundColor;
    FSlateColor BackgroundColor;
    FSlateColor ReadOnlyForegroundColor;
    FSlateColor FocusedForegroundColor;
    FMargin HScrollBarPadding;
    FMargin VScrollBarPadding;
    FScrollBarStyle ScrollBarStyle;

};

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FSlateBrush BackgroundImageSelected;
    FSlateBrush BackgroundImageComposing;
    FSlateBrush CaretImage;

};

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;
    FSlateBrush ExpandedImage;
    float RolloutAnimationSeconds;

};

struct FFocusEvent
{
};

struct FFontData
{
    FString FontFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    int32 SubFaceIndex;
    class UObject* FontFaceAsset;

};

struct FFontOutlineSettings
{
    int32 OutlineSize;
    int32 OutlineBlur;
    bool bSeparateFillAlpha;
    bool bApplyOutlineToDropShadows;
    class UObject* OutlineMaterial;
    FLinearColor OutlineColor;

};

struct FGeometry
{
};

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;
    FTableColumnHeaderStyle LastColumnStyle;
    FSplitterStyle ColumnSplitterStyle;
    float SplitterHandleSize;
    FSlateBrush BackgroundBrush;
    FSlateColor ForegroundColor;
    FSlateBrush HorizontalSeparatorBrush;
    float HorizontalSeparatorThickness;

};

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;
    FTextBlockStyle TextStyle;
    FMargin Padding;

};

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;
    FTextBlockStyle TextStyle;

};

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;
    int16 Baseline;

};

struct FInputEvent
{
};

struct FKeyEvent : public FInputEvent
{
};

struct FMargin
{
    float Left;
    float Top;
    float Right;
    float Bottom;

};

struct FMotionEvent : public FInputEvent
{
};

struct FNavigationEvent : public FInputEvent
{
};

struct FPointerEvent : public FInputEvent
{
};

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;
    FSlateBrush FillImage;
    FSlateBrush MarqueeImage;
    bool EnableFillAnimation;

};

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;
    FSlateBrush VerticalBackgroundImage;
    FSlateBrush VerticalTopSlotImage;
    FSlateBrush HorizontalTopSlotImage;
    FSlateBrush VerticalBottomSlotImage;
    FSlateBrush HorizontalBottomSlotImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DraggedThumbImage;
    float Thickness;

};

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;

};

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    float BarThickness;
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
    FSlateBrush LeftShadowBrush;
    FSlateBrush RightShadowBrush;

};

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;
    FSlateFontInfo ActiveFontInfo;
    FSlateBrush UpArrowImage;
    FSlateBrush DownArrowImage;
    FSlateBrush GlassImage;
    FSlateBrush ClearImage;
    FMargin ImagePadding;
    bool bLeftAlignButtons;
    bool bLeftAlignSearchResultButtons;
    bool bLeftAlignGlassImageAndClearButton;

};

struct FSegmentedControlStyle : public FSlateWidgetStyle
{
    FCheckBoxStyle ControlStyle;
    FCheckBoxStyle FirstControlStyle;
    FCheckBoxStyle LastControlStyle;
    FSlateBrush BackgroundBrush;
    FMargin UniformPadding;

};

struct FSlateBrush
{
    uint8 bIsDynamicallyLoaded;
    uint8 bHasUObject;
    TEnumAsByte<ESlateBrushDrawType> DrawAs;
    TEnumAsByte<ESlateBrushTileType> Tiling;
    TEnumAsByte<ESlateBrushMirrorType> Mirroring;
    TEnumAsByte<ESlateBrushImageType> ImageType;
    FVector2D ImageSize;
    FMargin Margin;
    FSlateColor TintColor;
    FSlateBrushOutlineSettings OutlineSettings;
    class UObject* ResourceObject;
    FName ResourceName;
    FBox2f UVRegion;

};

struct FSlateBrushOutlineSettings
{
    FVector4 CornerRadii;
    FSlateColor Color;
    float Width;
    TEnumAsByte<ESlateBrushRoundingType> RoundingType;
    bool bUseBrushTransparency;

};

struct FSlateColor
{
    FLinearColor SpecifiedColor;
    ESlateColorStylingMode ColorUseRule;

};

struct FSlateFontInfo
{
    class UObject* FontObject;
    class UObject* FontMaterial;
    FFontOutlineSettings OutlineSettings;
    FName TypefaceFontName;
    int32 Size;
    int32 LetterSpacing;
    float SkewAmount;

};

struct FSlateSound
{
    class UObject* ResourceObject;

};

struct FSlateWidgetStyle
{
};

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;
    FSlateBrush HoveredBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DisabledThumbImage;
    float BarThickness;

};

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;
    FSlateBrush ActiveBackgroundBrush;
    FSlateBrush HoveredBackgroundBrush;
    FSlateBrush ActiveFillBrush;
    FSlateBrush HoveredFillBrush;
    FSlateBrush InactiveFillBrush;
    FSlateBrush ArrowsImage;
    FSlateColor ForegroundColor;
    FMargin TextPadding;
    FMargin InsetPadding;

};

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;
    FSlateBrush HandleHighlightBrush;

};

struct FStyleColorList
{
    FLinearColor StyleColors;

};

struct FStyleTheme
{
};

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;
    FSlateBrush SortPrimaryDescendingImage;
    FSlateBrush SortSecondaryAscendingImage;
    FSlateBrush SortSecondaryDescendingImage;
    FSlateBrush NormalBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush MenuDropdownImage;
    FSlateBrush MenuDropdownNormalBorderBrush;
    FSlateBrush MenuDropdownHoveredBorderBrush;

};

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;
    FSlateBrush ActiveHoveredBrush;
    FSlateBrush ActiveBrush;
    FSlateBrush InactiveHoveredBrush;
    FSlateBrush InactiveBrush;
    bool bUseParentRowBrush;
    FSlateBrush ParentRowBackgroundBrush;
    FSlateBrush ParentRowBackgroundHoveredBrush;
    FSlateBrush EvenRowBackgroundHoveredBrush;
    FSlateBrush EvenRowBackgroundBrush;
    FSlateBrush OddRowBackgroundHoveredBrush;
    FSlateBrush OddRowBackgroundBrush;
    FSlateColor TextColor;
    FSlateColor SelectedTextColor;
    FSlateBrush DropIndicator_Above;
    FSlateBrush DropIndicator_Onto;
    FSlateBrush DropIndicator_Below;
    FSlateBrush ActiveHighlightedBrush;
    FSlateBrush InactiveHighlightedBrush;

};

struct FTableViewStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;

};

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateColor SelectedBackgroundColor;
    FSlateColor HighlightColor;
    FSlateBrush HighlightShape;
    FSlateBrush StrikeBrush;
    FSlateBrush UnderlineBrush;
    ETextTransformPolicy TransformPolicy;
    ETextOverflowPolicy OverflowPolicy;

};

struct FToolBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;
    FSlateBrush ExpandBrush;
    FSlateBrush SeparatorBrush;
    FTextBlockStyle LabelStyle;
    FEditableTextBoxStyle EditableTextStyle;
    FCheckBoxStyle ToggleButton;
    FComboButtonStyle ComboButtonStyle;
    FButtonStyle SettingsButtonStyle;
    FComboButtonStyle SettingsComboButton;
    FCheckBoxStyle SettingsToggleButton;
    FButtonStyle ButtonStyle;
    FMargin LabelPadding;
    FMargin SeparatorPadding;
    FMargin ComboButtonPadding;
    FMargin ButtonPadding;
    FMargin CheckBoxPadding;
    FMargin BlockPadding;
    FMargin IndentedBlockPadding;
    FMargin BackgroundPadding;
    FVector2D IconSize;
    bool bShowLabels;

};

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;

};

struct FTypefaceEntry
{
    FName Name;
    FFontData Font;

};

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;
    FSlateBrush HighVolumeImage;
    FSlateBrush MidVolumeImage;
    FSlateBrush LowVolumeImage;
    FSlateBrush NoVolumeImage;
    FSlateBrush MutedImage;

};

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;
    FButtonStyle MaximizeButtonStyle;
    FButtonStyle RestoreButtonStyle;
    FButtonStyle CloseButtonStyle;
    FTextBlockStyle TitleTextStyle;
    FSlateBrush ActiveTitleBrush;
    FSlateBrush InactiveTitleBrush;
    FSlateBrush FlashTitleBrush;
    FSlateColor BackgroundColor;
    FSlateBrush OutlineBrush;
    FSlateColor OutlineColor;
    FSlateBrush BorderBrush;
    FSlateColor BorderColor;
    FSlateBrush BackgroundBrush;
    FSlateBrush ChildBackgroundBrush;
    int32 WindowCornerRadius;
    FMargin BorderPadding;

};

class IFontFaceInterface : public IInterface
{
};

class IFontProviderInterface : public IInterface
{
};

class ISlateWidgetStyleContainerInterface : public IInterface
{
};

class UFontBulkData : public UObject
{
};

class USlateThemeManager : public UObject
{
    FGuid CurrentThemeId;
    FStyleColorList ActiveColors;

};

class USlateTypes : public UObject
{
};

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;

};

class USlateWidgetStyleContainerBase : public UObject
{
};

#endif
