#include "ButtonSlot.h"

UButtonSlot::UButtonSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Center;
}

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UButtonSlot::SetPadding(FMargin InPadding) {
}

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


