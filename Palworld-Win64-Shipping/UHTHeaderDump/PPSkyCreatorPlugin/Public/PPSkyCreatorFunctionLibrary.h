#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PPCelestialPositionData.h"
#include "PPSkyCreatorFunctionLibrary.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class PPSKYCREATORPLUGIN_API UPPSkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPPSkyCreatorFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static float KilometersToCentimeters(const float Value);
    
    UFUNCTION(BlueprintPure)
    static bool IsApplicationForegroundNow();
    
    UFUNCTION(BlueprintPure)
    static FPPCelestialPositionData GetRealSunPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    
    UFUNCTION(BlueprintPure)
    static FPPCelestialPositionData GetRealMoonPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool FindLightningPosition(UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget, FVector Position, float InnerRadius, float OuterRadius, float minHeight, float maxHeight, float DensityThreshold, FVector& OutPosition);
    
private:
    UFUNCTION()
    static double ElevationRefraction(double F);
    
public:
    UFUNCTION(BlueprintPure)
    UTexture2D* DynamicConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CreateAndAssignMID(UObject* WorldContextObject, UMaterialInterface* InMaterial, UMaterialInstanceDynamic*& InMID);
    
    UFUNCTION(BlueprintPure)
    static void ConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget, UTexture2D*& Texture);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintPure)
    static float CentimetersToKilometers(const float Value);
    
};

