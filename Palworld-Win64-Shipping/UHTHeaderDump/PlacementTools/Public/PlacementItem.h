#pragma once
#include "CoreMinimal.h"
#include "EItemType.h"
#include "Templates/SubclassOf.h"
#include "PlacementItem.generated.h"

class AActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPlacementItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    PLACEMENTTOOLS_API FPlacementItem();
};

