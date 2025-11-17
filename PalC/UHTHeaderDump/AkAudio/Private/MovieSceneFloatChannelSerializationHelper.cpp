#include "MovieSceneFloatChannelSerializationHelper.h"

FMovieSceneFloatChannelSerializationHelper::FMovieSceneFloatChannelSerializationHelper() {
    this->PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Cycle;
    this->PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Cycle;
    this->DefaultValue = 0.00f;
    this->bHasDefaultValue = false;
}

