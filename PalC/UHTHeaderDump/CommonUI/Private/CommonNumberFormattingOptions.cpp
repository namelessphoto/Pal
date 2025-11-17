#include "CommonNumberFormattingOptions.h"

FCommonNumberFormattingOptions::FCommonNumberFormattingOptions() {
    this->RoundingMode = ERoundingMode::HalfToEven;
    this->UseGrouping = false;
    this->MinimumIntegralDigits = 0;
    this->MaximumIntegralDigits = 0;
    this->MinimumFractionalDigits = 0;
    this->MaximumFractionalDigits = 0;
}

