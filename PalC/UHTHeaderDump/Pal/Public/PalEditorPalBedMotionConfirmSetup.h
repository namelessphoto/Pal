#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalSizeType.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalEditorPalBedMotionConfirmBuildObjectInfo.h"
#include "PalEditorPalBedMotionConfirmSetup.generated.h"

class APalBuildObject;

UCLASS()
class PAL_API APalEditorPalBedMotionConfirmSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_MapObjectData> TargetMapObjectIds;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_PalMonsterData> TargetCharacterIds;
    
    UPROPERTY(EditAnywhere)
    FVector InstallMargin;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bCollapseIgnoredCharacter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bBoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreNocturnal;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreTowerBoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<EPalSizeType> UsePalSizeTypes;
    
private:
    UPROPERTY()
    TMap<FName, FPalEditorPalBedMotionConfirmBuildObjectInfo> PalBedBuildObjectInfoMap;
    
public:
    APalEditorPalBedMotionConfirmSetup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CreateCharacterCheckUnitForBed(const FName CharacterID, const FTransform& InstallTransform, const FName MapObjectId, const APalBuildObject* BuildObject);
    
};

