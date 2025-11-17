#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalFoliagePresetType.h"
#include "PalCellCoord.h"
#include "PalMapObjectFoliage.generated.h"

class UPalFoliageGridModel;
class UPalFoliagePresetDataSet;
class UPalFoliageType_InstancedStaticMesh;

UCLASS()
class PAL_API UPalMapObjectFoliage : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalFoliagePresetDataSet* PresetDataSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, UPalFoliageType_InstancedStaticMesh*> UsedPalFoliageTypeMap;
    
    UPROPERTY(Transient)
    TSet<EPalFoliagePresetType> LoadedPresetTypeSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 GridSize;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalCellCoord, UPalFoliageGridModel*> GridModelMap;
    
public:
    UPalMapObjectFoliage();

};

