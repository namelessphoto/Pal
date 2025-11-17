#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalSizeType.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalEditorPalBedConfirmSetup.generated.h"

class APalDebugAutoBaseCampBuilder;
class APalEditorPalBedConfirmNamePlate;
class APalMapObject;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalEditorPalBedConfirmSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_MapObjectData PalBedMapObjectId;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_PalMonsterData> TargetCharacterIds;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumInLine;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumRow;
    
    UPROPERTY(EditAnywhere)
    int32 StartIndex;
    
    UPROPERTY(EditAnywhere)
    FVector InstallMargin;
    
    UPROPERTY(EditAnywhere)
    bool bStartWithNight;
    
    UPROPERTY(EditAnywhere)
    bool bSleepOnSideForce;
    
    UPROPERTY(EditAnywhere)
    bool bCreatePlayerMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bCollapseIgnoredCharacter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreNocturnal;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreRaidBoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreTowerBoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<EPalSizeType> UsePalSizeTypes;
    
    UPROPERTY()
    TMap<UPalIndividualCharacterHandle*, FGuid> IndividualHandleToMapObjectInstanceId;
    
    UPROPERTY()
    APalDebugAutoBaseCampBuilder* DebugAutoBaseCampBuilder;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalEditorPalBedConfirmNamePlate> NamePlateActorClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalBaseCampModel* VirtualBaseCamp;
    
public:
    APalEditorPalBedConfirmSetup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void SetupForSpawnedMapObject(const FGuid& InstanceId, const FName CharacterID);
    
    UFUNCTION()
    void OnWorldMapObjectSpawnable();
    
    UFUNCTION()
    void OnSpawnedCharacterInServer(FPalInstanceID IndividualId);
    
    UFUNCTION()
    void OnCreatedIndividual(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateAndInstallPlayerMesh(const APalMapObject* MapObject);
    
};

