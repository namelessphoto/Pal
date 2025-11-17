#pragma once
#include "CoreMinimal.h"
#include "RemeshProperties.h"
#include "BrushRemeshProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBrushRemeshProperties : public URemeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableRemeshing;
    
    UPROPERTY(EditAnywhere)
    int32 TriangleSize;
    
    UPROPERTY(EditAnywhere)
    int32 PreserveDetail;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 Iterations;
    
    UBrushRemeshProperties();

};

