#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LatticeDeformerOperatorFactory.generated.h"

class ULatticeDeformerTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API ULatticeDeformerOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULatticeDeformerTool* LatticeDeformerTool;
    
    ULatticeDeformerOperatorFactory();

};

