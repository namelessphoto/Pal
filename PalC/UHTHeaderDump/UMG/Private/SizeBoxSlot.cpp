#include "SizeBoxSlot.h"

USizeBoxSlot::USizeBoxSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
}

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void USizeBoxSlot::SetPadding(FMargin InPadding) {
}

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


