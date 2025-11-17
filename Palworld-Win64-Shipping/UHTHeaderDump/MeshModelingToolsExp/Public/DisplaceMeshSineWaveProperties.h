#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "DisplaceMeshSineWaveProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SineWaveFrequency;
    
    UPROPERTY(EditAnywhere)
    float SineWavePhaseShift;
    
    UPROPERTY(EditAnywhere)
    FVector SineWaveDirection;
    
    UDisplaceMeshSineWaveProperties();

};

