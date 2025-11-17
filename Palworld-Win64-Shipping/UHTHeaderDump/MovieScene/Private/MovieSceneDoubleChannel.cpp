#include "MovieSceneDoubleChannel.h"

FMovieSceneDoubleChannel::FMovieSceneDoubleChannel() {
    this->PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Cycle;
    this->PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Cycle;
    this->DefaultValue = 0.00f;
    this->bHasDefaultValue = false;
}

