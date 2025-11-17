#include "BorderSlot.h"

UBorderSlot::UBorderSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
}

void UBorderSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBorderSlot::SetPadding(FMargin InPadding) {
}

void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


