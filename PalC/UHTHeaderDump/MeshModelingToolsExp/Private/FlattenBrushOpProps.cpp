#include "FlattenBrushOpProps.h"

UFlattenBrushOpProps::UFlattenBrushOpProps() {
    this->Strength = 0.50f;
    this->Falloff = 0.50f;
    this->Depth = 0.00f;
    this->WhichSide = EPlaneBrushSideMode::BothSides;
}


