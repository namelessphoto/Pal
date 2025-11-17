#include "EOSSettings.h"

UEOSSettings::UEOSSettings() {
    this->CacheDir = TEXT("CacheDir");
    this->DefaultArtifactName = TEXT("PalWorld");
    this->TickBudgetInMilliseconds = 3000;
    this->bEnableOverlay = false;
    this->bEnableSocialOverlay = false;
    this->bEnableEditorOverlay = false;
    this->bShouldEnforceBeingLaunchedByEGS = false;
    this->TitleStorageReadChunkLength = 0;
    this->Artifacts.AddDefaulted(1);
    this->bUseEAS = false;
    this->bUseEOSConnect = true;
    this->bMirrorStatsToEOS = false;
    this->bMirrorAchievementsToEOS = false;
    this->bUseEOSSessions = true;
    this->bMirrorPresenceToEAS = false;
    this->bUseDeviceIdLogin = true;
    this->bOverrideDedicatedServer = false;
}


