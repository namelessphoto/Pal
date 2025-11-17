#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RevolveBoundaryOperatorFactory.generated.h"

class URevolveBoundaryTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API URevolveBoundaryOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    URevolveBoundaryTool* RevolveBoundaryTool;
    
    URevolveBoundaryOperatorFactory();

};

