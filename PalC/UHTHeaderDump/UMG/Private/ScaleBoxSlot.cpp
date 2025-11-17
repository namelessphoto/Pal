#include "ScaleBoxSlot.h"

UScaleBoxSlot::UScaleBoxSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Center;
}

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UScaleBoxSlot::SetPadding(FMargin InPadding) {
}

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


