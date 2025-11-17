#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::VeryLow;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = EAntiAliasingMethod::AAM_None;
    this->DLSSMode = UDLSSMode::Balanced;
    this->GraphicsCommonQuality = 0;
    this->bAppliedSteamDeckSettings = false;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


