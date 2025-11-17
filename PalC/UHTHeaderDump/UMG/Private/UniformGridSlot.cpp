#include "UniformGridSlot.h"

UUniformGridSlot::UUniformGridSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Top;
    this->Row = 0;
    this->Column = 0;
}

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UUniformGridSlot::SetRow(int32 InRow) {
}

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UUniformGridSlot::SetColumn(int32 InColumn) {
}


