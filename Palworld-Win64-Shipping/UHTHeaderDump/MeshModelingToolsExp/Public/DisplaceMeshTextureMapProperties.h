#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDisplaceMeshToolChannelType.h"
#include "DisplaceMeshTextureMapProperties.generated.h"

class UCurveFloat;
class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* DisplacementMap;
    
    UPROPERTY(EditAnywhere)
    EDisplaceMeshToolChannelType Channel;
    
    UPROPERTY(EditAnywhere)
    float DisplacementMapBaseValue;
    
    UPROPERTY(EditAnywhere)
    FVector2D UVScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D UVOffset;
    
    UPROPERTY(EditAnywhere)
    bool bApplyAdjustmentCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AdjustmentCurve;
    
    UPROPERTY(EditAnywhere)
    bool bRecalcNormals;
    
    UDisplaceMeshTextureMapProperties();

};

