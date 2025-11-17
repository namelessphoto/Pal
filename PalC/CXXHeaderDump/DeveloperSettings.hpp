#ifndef UE4SS_SDK_DeveloperSettings_HPP
#define UE4SS_SDK_DeveloperSettings_HPP

struct FPerPlatformSettings
{
    TArray<class UPlatformSettings*> Settings;

};

struct FPlatformSettingsInstances
{
    class UPlatformSettings* PlatformInstance;
    TMap<class FName, class UPlatformSettings*> OtherPlatforms;

};

class UDeveloperSettings : public UObject
{
};

class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
};

class UPlatformSettings : public UObject
{
};

class UPlatformSettingsManager : public UObject
{
    TMap<class TSubclassOf<UPlatformSettings>, class FPlatformSettingsInstances> SettingsMap;

};

#endif
