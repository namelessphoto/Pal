#include "DataRegistryCachePolicy.h"

FDataRegistryCachePolicy::FDataRegistryCachePolicy() {
    this->bCacheIsAlwaysVolatile = false;
    this->bUseCurveTableCacheVersion = false;
    this->MinNumberKept = 0;
    this->MaxNumberKept = 0;
    this->ForceKeepSeconds = 0.00f;
    this->ForceReleaseSeconds = 0.00f;
}

