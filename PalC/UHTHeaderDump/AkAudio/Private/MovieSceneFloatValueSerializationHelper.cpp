#include "MovieSceneFloatValueSerializationHelper.h"

FMovieSceneFloatValueSerializationHelper::FMovieSceneFloatValueSerializationHelper() {
    this->Value = 0.00f;
    this->InterpMode = ERichCurveInterpMode::RCIM_Linear;
    this->TangentMode = ERichCurveTangentMode::RCTM_Auto;
}

