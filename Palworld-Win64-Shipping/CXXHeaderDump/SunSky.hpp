#ifndef UE4SS_SDK_SunSky_HPP
#define UE4SS_SDK_SunSky_HPP

class ASunSky_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkyAtmosphereComponent* SkyAtmosphere;
    class UDirectionalLightComponent* DirectionalLight;
    class USkyLightComponent* SkyLight;
    class UStaticMeshComponent* CompassMesh;
    class USceneComponent* Scene;
    double Latitude;
    double Longitude;
    int32 Year;
    int32 Month;
    int32 Day;
    double TimeZone;
    bool UseDaylightSavingTime;
    double NorthOffset;
    double Elevation;
    double CorrectedElevation;
    double Azimuth;
    double SolarTime;
    int32 DSTStartMonth;
    int32 DSTStartDay;
    int32 DSTEndMonth;
    int32 DSTEndDay;
    int32 DSTSwitchHour;
    double HashVal;

    void IsDST(bool DSTEnable, int32 DSTStartMonth, int32 DSTStartDay, int32 DSTEndMonth, int32 DSTEndDay, int32 DSTSwitchHour, bool& IsDST);
    void GetHMSFromSolarTime(double SolarTime, int32& Hour, int32& Minute, int32& Second);
    void UpdateSun();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SunSky(int32 EntryPoint);
};

#endif
