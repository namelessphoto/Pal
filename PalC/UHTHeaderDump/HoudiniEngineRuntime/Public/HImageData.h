#pragma once
#include "CoreMinimal.h"
#include "HImageData.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHImageData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SizeX;
    
    UPROPERTY()
    int32 SizeY;
    
    UPROPERTY()
    int32 NumSlices;
    
    UPROPERTY()
    uint8 Format;
    
    UPROPERTY()
    uint8 GammaSpace;
    
    UPROPERTY()
    TArray<uint8> RawData;
    
    UPROPERTY()
    FString RawDataMD5;
    
    FHImageData();
};

