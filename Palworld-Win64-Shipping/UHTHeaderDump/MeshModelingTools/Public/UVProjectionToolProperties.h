#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=EUVProjectionMethod -FallbackName=EUVProjectionMethod
#include "EUVProjectionToolInitializationMode.h"
#include "UVProjectionToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UUVProjectionToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUVProjectionMethod ProjectionType;
    
    UPROPERTY(EditAnywhere)
    FVector Dimensions;
    
    UPROPERTY(EditAnywhere)
    bool bUniformDimensions;
    
    UPROPERTY(EditAnywhere)
    EUVProjectionToolInitializationMode Initialization;
    
    UPROPERTY(EditAnywhere)
    float CylinderSplitAngle;
    
    UPROPERTY(EditAnywhere)
    float ExpMapNormalBlending;
    
    UPROPERTY(EditAnywhere)
    int32 ExpMapSmoothingSteps;
    
    UPROPERTY(EditAnywhere)
    float ExpMapSmoothingAlpha;
    
    UPROPERTY(EditAnywhere)
    float Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(EditAnywhere)
    FVector2D Translation;
    
    UPROPERTY()
    FVector SavedDimensions;
    
    UPROPERTY()
    bool bSavedUniformDimensions;
    
    UPROPERTY()
    FTransform SavedTransform;
    
    UUVProjectionToolProperties();

};

