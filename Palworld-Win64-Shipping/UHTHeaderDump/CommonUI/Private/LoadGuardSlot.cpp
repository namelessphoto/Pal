#include "LoadGuardSlot.h"

ULoadGuardSlot::ULoadGuardSlot() {
    this->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
    this->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
}

void ULoadGuardSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void ULoadGuardSlot::SetPadding(FMargin InPadding) {
}

void ULoadGuardSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


