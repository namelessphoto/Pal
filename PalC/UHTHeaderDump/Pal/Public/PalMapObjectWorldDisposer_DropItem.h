#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalDropItemType.h"
#include "PalMapObjectWorldDisposerBase.h"
#include "PalMapObjectWorldDropItemInfoSet.h"
#include "PalMapObjectWorldDisposer_DropItem.generated.h"

class UPalMapObjectModel;

UCLASS()
class PAL_API UPalMapObjectWorldDisposer_DropItem : public UPalMapObjectWorldDisposerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalDropItemType, FPalMapObjectWorldDropItemInfoSet> DropItemInfoSetMap;
    
public:
    UPalMapObjectWorldDisposer_DropItem();

private:
    UFUNCTION()
    void OnRestoreMapObject_ServerInternal(UPalMapObjectModel* Model);
    
    UFUNCTION()
    void OnCreateMapObject_ServerInternal(UPalMapObjectModel* SpawnedModel, const FVector& SpawnLocation);
    
};

