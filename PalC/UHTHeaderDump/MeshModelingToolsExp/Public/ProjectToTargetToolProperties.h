#pragma once
#include "CoreMinimal.h"
#include "RemeshMeshToolProperties.h"
#include "ProjectToTargetToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UProjectToTargetToolProperties : public URemeshMeshToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bWorldSpace;
    
    UPROPERTY(EditAnywhere)
    bool bParallel;
    
    UPROPERTY(EditAnywhere)
    int32 FaceProjectionPassesPerRemeshIteration;
    
    UPROPERTY(EditAnywhere)
    float SurfaceProjectionSpeed;
    
    UPROPERTY(EditAnywhere)
    float NormalAlignmentSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bSmoothInFillAreas;
    
    UPROPERTY(EditAnywhere)
    float FillAreaDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float FillAreaSmoothMultiplier;
    
    UProjectToTargetToolProperties();

};

