#ifndef UE4SS_SDK_SunPosition_HPP
#define UE4SS_SDK_SunPosition_HPP

struct FSunPositionData
{
    float Elevation;
    float CorrectedElevation;
    float Azimuth;
    FTimespan SunriseTime;
    FTimespan SunsetTime;
    FTimespan SolarNoon;

};

class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32 Year, int32 Month, int32 Day, int32 Hours, int32 Minutes, int32 Seconds, FSunPositionData& SunPositionData);
};

#endif
