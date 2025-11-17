#include "SteamNetDriver.h"

USteamNetDriver::USteamNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("OnlineSubsystemUtils.IpNetDriver");
    this->ChannelDefinitions.AddDefaulted(3);
}


