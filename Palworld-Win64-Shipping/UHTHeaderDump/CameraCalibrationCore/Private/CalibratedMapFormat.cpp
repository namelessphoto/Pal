#include "CalibratedMapFormat.h"

FCalibratedMapFormat::FCalibratedMapFormat() {
    this->PixelOrigin = ECalibratedMapPixelOrigin::TopLeft;
    this->UndistortionChannels = ECalibratedMapChannels::RG;
    this->DistortionChannels = ECalibratedMapChannels::RG;
}

