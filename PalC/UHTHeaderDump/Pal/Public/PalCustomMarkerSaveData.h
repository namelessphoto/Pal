#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCustomMarkerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCustomMarkerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector IconLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IconType;
    
    PAL_API FPalCustomMarkerSaveData();
};

