#include "WindowTitleBarAreaSlot.h"

UWindowTitleBarAreaSlot::UWindowTitleBarAreaSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
}

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWindowTitleBarAreaSlot::SetPadding(FMargin InPadding) {
}

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


