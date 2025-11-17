#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalUICaptureCameraOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FPalUICaptureCameraOffsetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PointLightOffset_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointLightIntensity_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointLightSize_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PointLightOffset_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointLightIntensity_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointLightSize_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RectLightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RectLightRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RectLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RectLightSize;
    
    PAL_API FPalUICaptureCameraOffsetData();
};

