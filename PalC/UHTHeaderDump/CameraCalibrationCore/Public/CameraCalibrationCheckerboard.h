#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraCalibrationCheckerboard.generated.h"

class UCalibrationPointComponent;
class UMaterialInterface;
class USceneComponent;
class UStaticMesh;

UCLASS()
class CAMERACALIBRATIONCORE_API ACameraCalibrationCheckerboard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USceneComponent* Root;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCalibrationPointComponent* TopLeft;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCalibrationPointComponent* TopRight;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCalibrationPointComponent* BottomLeft;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCalibrationPointComponent* BottomRight;
    
    UPROPERTY(EditAnywhere, Instanced)
    UCalibrationPointComponent* Center;
    
    UPROPERTY(EditAnywhere)
    int32 NumCornerRows;
    
    UPROPERTY(EditAnywhere)
    int32 NumCornerCols;
    
    UPROPERTY(EditAnywhere)
    float SquareSideLength;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* CubeMesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* OddCubeMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* EvenCubeMaterial;
    
    ACameraCalibrationCheckerboard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Rebuild();
    
};

