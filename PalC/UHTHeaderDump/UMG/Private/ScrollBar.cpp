#include "ScrollBar.h"

UScrollBar::UScrollBar() {
    this->bIsVariable = false;
    this->bAlwaysShowScrollbar = true;
    this->bAlwaysShowScrollbarTrack = true;
    this->Orientation = EOrientation::Orient_Vertical;
}

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
}


