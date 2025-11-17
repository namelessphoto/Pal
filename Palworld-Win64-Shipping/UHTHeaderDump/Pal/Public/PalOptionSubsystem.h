#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowMode -FallbackName=EWindowMode
#include "EPalOptionGraphicsLevel.h"
#include "EPalOptionWorldDifficulty.h"
#include "PalKeyConfigSettings.h"
#include "PalOptionAudioSettings.h"
#include "PalOptionCommonSettings.h"
#include "PalOptionGraphicsSettings.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionLocalStaticSettings.h"
#include "PalOptionOnlineUserSettings.h"
#include "PalOptionPadSettings.h"
#include "PalOptionUISettings.h"
#include "PalOptionWorldSettinThresholds.h"
#include "PalOptionWorldSettings.h"
#include "PalOptionWorldStaticSettings.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalOptionSubsystem.generated.h"

class APalPlayerCharacter;
class UDataTable;

UCLASS(BlueprintType)
class PAL_API UPalOptionSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeWorldSettingsDelegate, const FPalOptionWorldSettings&, PrevSettings, const FPalOptionWorldSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeUISettingDelegate, const FPalOptionUISettings&, PrevSettings, const FPalOptionUISettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeScreenRatioDelegate, float, newRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangePadDelegate, const FPalOptionPadSettings&, PrevSettings, const FPalOptionPadSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeOnlineUserSettingsDelegate, const FPalOptionOnlineUserSettings&, PrevSettings, const FPalOptionOnlineUserSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeKeyConfigDelegate, const FPalKeyConfigSettings&, PrevSettings, const FPalKeyConfigSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeKeyboardDelegate, const FPalOptionKeyboardSettings&, PrevSettings, const FPalOptionKeyboardSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeGraphicsDelegate, const FPalOptionGraphicsSettings&, PrevSettings, const FPalOptionGraphicsSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeCommonSettingsDelegate, const FPalOptionCommonSettings&, PrevSettings, const FPalOptionCommonSettings&, NewSettings);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeKeyboardDelegate OnChangeKeyboardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangePadDelegate OnChangePadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeGraphicsDelegate OnChangeGraphicsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeWorldSettingsDelegate OnChangeWorldSettingsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeKeyConfigDelegate OnChangeKeyConfigDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeUISettingDelegate OnChangeUISettingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeOnlineUserSettingsDelegate OnChangeOnlineUserSettingsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeScreenRatioDelegate OnChangeScreenRatioDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeCommonSettingsDelegate OnChangeCommonSettingDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalOptionWorldStaticSettings OptionWorldStaticSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FPalOptionLocalStaticSettings OptionLocalStaticSettings;
    
    UPROPERTY()
    FPalOptionWorldSettings OptionWorldSettings;
    
    UPROPERTY()
    FPalOptionWorldSettings OptionWorldSettingsCache;
    
    UPROPERTY()
    FPalOptionGraphicsSettings GraphicsSettings;
    
    UPROPERTY()
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY()
    FPalOptionCommonSettings CommonSettings;
    
    UPROPERTY()
    FPalOptionKeyboardSettings KeyboardSettings;
    
    UPROPERTY()
    FPalOptionPadSettings PadSettings;
    
    UPROPERTY()
    FPalKeyConfigSettings KeyConfigSettings;
    
    UPROPERTY()
    FPalOptionUISettings UISettings;
    
    UPROPERTY()
    FPalOptionOnlineUserSettings OnlineUserSettings;
    
public:
    UPROPERTY(BlueprintReadOnly)
    float BaseFov;
    
    UPROPERTY(BlueprintReadOnly)
    FString Namespace;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OptionWorldPresetTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OptionWorldModePresetTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OptionGraphicsPresetTable;
    
    UPROPERTY(EditDefaultsOnly)
    FPalOptionWorldSettinThresholds WorldSettingThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalPlayerCharacter> PalPlayerCharacterClass;
    
public:
    UPalOptionSubsystem();

    UFUNCTION(BlueprintPure)
    bool VerifyWorldSettingThresholds(const FPalOptionWorldSettings& CheckWorldSettings) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupForSteamDeck();
    
    UFUNCTION(BlueprintCallable)
    void SetUISettings(const FPalOptionUISettings& InUISettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPadSettings(const FPalOptionPadSettings& InPadSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionWorldSettings(const FPalOptionWorldSettings& InOptionWorldSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineUserSettings(const FPalOptionOnlineUserSettings& InOnlineUserSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyConfigSettings(const FPalKeyConfigSettings& InKeyConfigSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardSettings(const FPalOptionKeyboardSettings& InKeyboardSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsSettings(const FPalOptionGraphicsSettings& InGraphicsSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCommonSettings(const FPalOptionCommonSettings& InCommonSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioSettings(const FPalOptionAudioSettings& InAudioSettings);
    
    UFUNCTION(BlueprintCallable)
    void SaveLocalSettings();
    
private:
    UFUNCTION()
    void RefreshBanList();
    
    UFUNCTION()
    void OnCompletedGetBanlist(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCrossPlayAllowConnectPlatform() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionWorldSettinThresholds GetWorldSettingThresholds() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionUISettings GetUISettings() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSupportScreenSizes(TArray<FIntPoint>& SupportResolutions, TEnumAsByte<EWindowMode> WindowMode);
    
    UFUNCTION(BlueprintPure)
    FPalOptionPadSettings GetPadSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionWorldStaticSettings GetOptionWorldStaticSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionWorldSettings GetOptionWorldSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionLocalStaticSettings GetOptionLocalStaticSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionOnlineUserSettings GetOnlineUserSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalKeyConfigSettings GetKeyConfigSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionKeyboardSettings GetKeyboardSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionGraphicsSettings GetGraphicsSettings() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetGameResolution();
    
    UFUNCTION(BlueprintPure)
    FPalOptionCommonSettings GetCommonSettings() const;
    
    UFUNCTION(BlueprintPure)
    FPalOptionAudioSettings GetAudioSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldPreset(UPARAM(Ref) FPalOptionWorldSettings& OutSettings, EPalOptionWorldDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldModePreset(UPARAM(Ref) FPalOptionWorldSettings& OutSettings, bool bIsPvP);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsPresetByBenchMark(UPARAM(Ref) FPalOptionGraphicsSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsPreset(UPARAM(Ref) FPalOptionGraphicsSettings& OutSettings, EPalOptionGraphicsLevel GraphicsLevel);
    
};

