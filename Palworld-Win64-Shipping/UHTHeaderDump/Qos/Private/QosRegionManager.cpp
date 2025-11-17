#include "QosRegionManager.h"

UQosRegionManager::UQosRegionManager() {
    this->NumTestsPerRegion = 3;
    this->PingTimeout = 5.00f;
    this->bEnableSubspaceBiasOrder = false;
    this->SubspaceDelimiter = TEXT("_");
    this->Evaluator = NULL;
    this->QosEvalResult = EQosCompletionResult::Invalid;
    this->bRegionForcedViaCommandline = false;
}


