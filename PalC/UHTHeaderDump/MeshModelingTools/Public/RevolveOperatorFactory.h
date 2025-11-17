#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RevolveOperatorFactory.generated.h"

class UDrawAndRevolveTool;

UCLASS()
class MESHMODELINGTOOLS_API URevolveOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDrawAndRevolveTool* RevolveTool;
    
    URevolveOperatorFactory();

};

