#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterContainerSortType.h"
#include "EPalElementType.h"
#include "EPalWorkSuitability.h"
#include "PalCharacterContainerSortInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterContainerSortInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalCharacterContainerSortType SortType;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<uint8> PrioritizeFavoriteIndexArray;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EPalElementType> FilteringElementType;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EPalWorkSuitability> FilteringSuitability;
    
    UPROPERTY(BlueprintReadWrite)
    bool bPrioritizeMale;
    
    UPROPERTY(BlueprintReadWrite)
    bool bPrioritizeFemael;
    
    UPROPERTY(BlueprintReadWrite)
    bool bPrioritizeImportedPal;
    
    UPROPERTY(BlueprintReadWrite)
    FName FilteringPassiveId;
    
    PAL_API FPalCharacterContainerSortInfo();
};

