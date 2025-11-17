#pragma once
#include "CoreMinimal.h"
#include "MeshConstraintProperties.h"
#include "RemeshProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URemeshProperties : public UMeshConstraintProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SmoothingStrength;
    
    UPROPERTY(EditAnywhere)
    bool bFlips;
    
    UPROPERTY(EditAnywhere)
    bool bSplits;
    
    UPROPERTY(EditAnywhere)
    bool bCollapses;
    
    URemeshProperties();

};

