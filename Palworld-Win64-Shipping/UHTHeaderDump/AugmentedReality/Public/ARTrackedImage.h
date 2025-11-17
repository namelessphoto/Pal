#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARTrackedGeometry.h"
#include "ARTrackedImage.generated.h"

class UARCandidateImage;

UCLASS()
class AUGMENTEDREALITY_API UARTrackedImage : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UARCandidateImage* DetectedImage;
    
    UPROPERTY()
    FVector2D EstimatedSize;
    
public:
    UARTrackedImage();

    UFUNCTION(BlueprintPure)
    FVector2D GetEstimateSize();
    
    UFUNCTION(BlueprintPure)
    UARCandidateImage* GetDetectedImage() const;
    
};

