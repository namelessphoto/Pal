#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "EPalMapObjectDamagableType.h"
#include "PalBoundsTransform.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectModelStaticData.generated.h"

class APalMapObject;

USTRUCT(BlueprintType)
struct FPalMapObjectModelStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FBox MeshBoxBounds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalMapObjectDamagableType DamagableType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName BuildObjectId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSubclassOf<APalMapObject> BlueprintClass;
    
    PAL_API FPalMapObjectModelStaticData();
};

