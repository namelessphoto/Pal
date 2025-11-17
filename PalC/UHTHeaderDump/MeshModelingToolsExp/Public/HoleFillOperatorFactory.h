#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoleFillOperatorFactory.generated.h"

class UHoleFillTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UHoleFillOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHoleFillTool* FillTool;
    
    UHoleFillOperatorFactory();

};

