#include "OverlaySlot.h"

UOverlaySlot::UOverlaySlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Top;
}

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UOverlaySlot::SetPadding(FMargin InPadding) {
}

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


