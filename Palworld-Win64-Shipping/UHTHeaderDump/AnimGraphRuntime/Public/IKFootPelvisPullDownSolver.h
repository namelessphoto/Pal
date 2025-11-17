#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VectorRK4SpringInterpolator -FallbackName=VectorRK4SpringInterpolator
#include "IKFootPelvisPullDownSolver.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FIKFootPelvisPullDownSolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator PelvisAdjustmentInterp;
    
    UPROPERTY(EditAnywhere)
    float PelvisAdjustmentInterpAlpha;
    
    UPROPERTY(EditAnywhere)
    float PelvisAdjustmentMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float PelvisAdjustmentErrorTolerance;
    
    UPROPERTY(EditAnywhere)
    int32 PelvisAdjustmentMaxIter;
    
    FIKFootPelvisPullDownSolver();
};

