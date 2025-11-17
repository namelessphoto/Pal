#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditNormalsOperatorFactory.generated.h"

class UEditNormalsTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UEditNormalsOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEditNormalsTool* Tool;
    
    UEditNormalsOperatorFactory();

};

