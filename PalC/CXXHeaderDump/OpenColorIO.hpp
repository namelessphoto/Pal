#ifndef UE4SS_SDK_OpenColorIO_HPP
#define UE4SS_SDK_OpenColorIO_HPP

#include "OpenColorIO_enums.hpp"

struct FOpenColorIOColorConversionSettings
{
    class UOpenColorIOConfiguration* ConfigurationSource;
    FOpenColorIOColorSpace SourceColorSpace;
    FOpenColorIOColorSpace DestinationColorSpace;
    FOpenColorIODisplayView DestinationDisplayView;
    EOpenColorIOViewTransformDirection DisplayViewDirection;

};

struct FOpenColorIOColorSpace
{
    FString ColorSpaceName;
    int32 ColorSpaceIndex;
    FString FamilyName;

};

struct FOpenColorIODisplayConfiguration
{
    bool bIsEnabled;
    FOpenColorIOColorConversionSettings ColorConfiguration;

};

struct FOpenColorIODisplayView
{
    FString Display;
    FString View;

};

class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool ApplyColorSpaceTransform(const class UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
};

class UOpenColorIOColorTransform : public UObject
{
    class UOpenColorIOConfiguration* ConfigurationOwner;
    bool bIsDisplayViewType;
    FString SourceColorSpace;
    FString DestinationColorSpace;
    FString Display;
    FString View;
    EOpenColorIOViewTransformDirection DisplayViewDirection;
    TMap<int32, UTexture*> Textures;

};

class UOpenColorIOConfiguration : public UObject
{
    FFilePath ConfigurationFile;
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;
    TArray<class UOpenColorIOColorTransform*> ColorTransforms;

};

class UOpenColorIODisplayExtensionWrapper : public UObject
{

    void SetSceneExtensionIsActiveFunctions(const TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    void SetSceneExtensionIsActiveFunction(const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    void RemoveSceneExtension();
    class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration);
};

class UOpenColorIOSettings : public UDeveloperSettings
{
    uint8 bUseLegacyProcessor;
    uint8 bUse32fLUT;

};

#endif
