#include "UpdateManager.h"

UUpdateManager::UUpdateManager() {
    this->HotfixCheckCompleteDelay = 0.10f;
    this->UpdateCheckCompleteDelay = 0.50f;
    this->HotfixAvailabilityCheckCompleteDelay = 0.10f;
    this->UpdateCheckAvailabilityCompleteDelay = 0.10f;
    this->AppSuspendedUpdateCheckTimeSeconds = 600;
    this->bPlatformEnvironmentDetected = true;
    this->bInitialUpdateFinished = false;
    this->bCheckHotfixAvailabilityOnly = false;
    this->CurrentUpdateState = EUpdateState::UpdateIdle;
    this->WorstNumFilesPendingLoadViewed = 0;
    this->LastHotfixResult = EHotfixResult::Failed;
    this->LastCompletionResult[0] = EUpdateCompletionStatus::UpdateUnknown;
    this->LastCompletionResult[1] = EUpdateCompletionStatus::UpdateUnknown;
    this->UpdateStateEnum = NULL;
    this->UpdateCompletionEnum = NULL;
}


