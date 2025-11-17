#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CopyrightNotice = TEXT("Copyright Pocketpair, Inc. All Rights Reserved.");
    this->ProjectName = TEXT("Pal");
    this->ProjectVersion = TEXT("DLC.S5.1019");
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
    this->EyeOffsetForFakeStereoRenderingDevice = 0.03f;
    this->FOVForFakeStereoRenderingDevice = 100.00f;
}


