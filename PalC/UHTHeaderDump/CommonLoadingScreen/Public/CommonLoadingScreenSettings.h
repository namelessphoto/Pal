#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettingsBackedByCVars -FallbackName=DeveloperSettingsBackedByCVars
#include "CommonLoadingScreenSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UCommonLoadingScreenSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath LoadingScreenWidget;
    
    UPROPERTY(Config, EditAnywhere)
    int32 LoadingScreenZOrder;
    
    UPROPERTY(Config, EditAnywhere)
    float HoldLoadingScreenAdditionalSecs;
    
    UPROPERTY(Config, EditAnywhere)
    float LoadingScreenHeartbeatHangDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float LogLoadingScreenHeartbeatInterval;
    
    UPROPERTY(EditAnywhere, Transient)
    bool LogLoadingScreenReasonEveryFrame;
    
    UPROPERTY(EditAnywhere, Transient)
    bool ForceLoadingScreenVisible;
    
    UPROPERTY(EditAnywhere, Transient)
    bool HoldLoadingScreenAdditionalSecsEvenInEditor;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceTickLoadingScreenEvenInEditor;
    
    UCommonLoadingScreenSettings();

};

