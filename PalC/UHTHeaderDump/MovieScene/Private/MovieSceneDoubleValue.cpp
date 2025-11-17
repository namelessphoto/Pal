#include "MovieSceneDoubleValue.h"

FMovieSceneDoubleValue::FMovieSceneDoubleValue() {
    this->Value = 0.00f;
    this->InterpMode = ERichCurveInterpMode::RCIM_Linear;
    this->TangentMode = ERichCurveTangentMode::RCTM_Auto;
    this->PaddingByte = 0;
}

