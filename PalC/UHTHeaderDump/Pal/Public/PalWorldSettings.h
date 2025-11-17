#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "Templates/SubclassOf.h"
#include "PalWorldSettings.generated.h"

class UDataLayerAsset;
class UPalArenaWorldSubsystem;
class UPalAudioWorldSubsystem;
class UPalDungeonWorldSubsystem;
class UPalFunnelCharacterManager;
class UPalIncidentSystem;
class UPalInvaderManager;
class UPalOptionSubsystem;
class UPalStageWorldSubsystem;
class UPalStaticMeshImposterSubsystem;
class UPalTimeManager;

UCLASS()
class PAL_API APalWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalStageWorldSubsystem> StageWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDungeonWorldSubsystem> DungeonWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DungeonCreateInitialLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UDataLayerAsset* FieldEnvironmentDataLayerAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAudioWorldSubsystem> AudioWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsPalTimerEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalOptionSubsystem> OptionWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalTimeManager> TimeManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalInvaderManager> InvaderManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalIncidentSystem> IncidentSystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalFunnelCharacterManager> FunnelCharacterManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalArenaWorldSubsystem> ArenaWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalStaticMeshImposterSubsystem> StaticMeshImposterSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRequestCharacterMake;
    
    APalWorldSettings(const FObjectInitializer& ObjectInitializer);

};

