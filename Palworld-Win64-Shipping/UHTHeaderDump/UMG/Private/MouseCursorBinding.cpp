#include "MouseCursorBinding.h"

UMouseCursorBinding::UMouseCursorBinding() {
}

TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue() const {
    return EMouseCursor::None;
}


