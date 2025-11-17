#ifndef UE4SS_SDK_WinDualShock_HPP
#define UE4SS_SDK_WinDualShock_HPP

class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{
    int32 ControllerIndex;

};

class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{
    int32 ControllerIndex;

};

class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{
    float Spread;
    int32 Priority;
    bool Passthrough;

};

#endif
