#include "VerticalBoxSlot.h"

UVerticalBoxSlot::UVerticalBoxSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
}

void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UVerticalBoxSlot::SetSize(FSlateChildSize InSize) {
}

void UVerticalBoxSlot::SetPadding(FMargin InPadding) {
}

void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


