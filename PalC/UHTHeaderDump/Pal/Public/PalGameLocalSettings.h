#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=DLSSBlueprint -ObjectName=UDLSSMode -FallbackName=UDLSSMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAntiAliasingMethod -FallbackName=EAntiAliasingMethod
#include "EPalOptionGraphicsLevel.h"
#include "PalOptionAudioSettings.h"
#include "PalGameLocalSettings.generated.h"

UCLASS(BlueprintType, Config=GameUserSettings)
class UPalGameLocalSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EPalOptionGraphicsLevel GraphicsLevel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EPalOptionGraphicsLevel DefaultGraphicsLevel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bRunedBenchMark;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bHasAppliedUserSetting;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString DedicatedServerName;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingType;
    
    UPROPERTY(Config, EditDefaultsOnly)
    UDLSSMode DLSSMode;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 GraphicsCommonQuality;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bAppliedSteamDeckSettings;
    
    UPalGameLocalSettings();

    UFUNCTION(BlueprintCallable)
    bool RequireBenchMarkScalaBility();
    
};

