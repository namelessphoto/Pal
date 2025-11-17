#include "MovieSceneLensComponentSection.h"

UMovieSceneLensComponentSection::UMovieSceneLensComponentSection() {
    this->bRequiresRangedHook = true;
    this->bReapplyNodalOffset = false;
    this->OverrideLensFile = NULL;
    this->CachedLensFile = NULL;
}


