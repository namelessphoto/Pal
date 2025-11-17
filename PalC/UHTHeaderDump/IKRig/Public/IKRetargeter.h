#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRetargetPose.h"
#include "RetargetChainMap.h"
#include "RetargetGlobalSettings.h"
#include "RetargetProfile.h"
#include "TargetChainFKSettings.h"
#include "TargetChainIKSettings.h"
#include "TargetChainSettings.h"
#include "TargetChainSpeedPlantSettings.h"
#include "TargetRootSettings.h"
#include "IKRetargeter.generated.h"

class UIKRetargetGlobalSettings;
class UIKRetargeter;
class UIKRigDefinition;
class URetargetChainSettings;
class URetargetRootSettings;

UCLASS(BlueprintType)
class IKRIG_API UIKRetargeter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset;
    
    UPROPERTY()
    TArray<FRetargetChainMap> ChainMapping;
    
    UPROPERTY()
    TArray<URetargetChainSettings*> ChainSettings;
    
    UPROPERTY()
    URetargetRootSettings* RootSettings;
    
    UPROPERTY()
    UIKRetargetGlobalSettings* GlobalSettings;
    
    UPROPERTY()
    TMap<FName, FRetargetProfile> Profiles;
    
    UPROPERTY()
    FName CurrentProfile;
    
    UPROPERTY()
    TMap<FName, FIKRetargetPose> SourceRetargetPoses;
    
    UPROPERTY()
    TMap<FName, FIKRetargetPose> TargetRetargetPoses;
    
    UPROPERTY()
    FName CurrentSourceRetargetPose;
    
    UPROPERTY()
    FName CurrentTargetRetargetPose;
    
    UPROPERTY()
    TMap<FName, FIKRetargetPose> RetargetPoses;
    
    UPROPERTY()
    FName CurrentRetargetPose;
    
public:
    UIKRetargeter();

    UFUNCTION(BlueprintCallable)
    static void SetRootSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetRootSettings& NewRootSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& NewGlobalSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainSpeedPlantSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainSettings& NewChainSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainIKSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainFKSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintPure)
    static FTargetRootSettings GetRootSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile);
    
    UFUNCTION(BlueprintPure)
    static void GetRootSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings);
    
    UFUNCTION(BlueprintPure)
    static FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile);
    
    UFUNCTION(BlueprintPure)
    static void GetGlobalSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings);
    
    UFUNCTION(BlueprintPure)
    static FTargetChainSettings GetChainUsingGoalFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName IKGoalName);
    
    UFUNCTION(BlueprintPure)
    static FTargetChainSettings GetChainSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FName TargetChainName);
    
    UFUNCTION(BlueprintPure)
    static FTargetChainSettings GetChainSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName);
    
};

