#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpaceDeformerOperatorFactory.generated.h"

class UMeshSpaceDeformerTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API USpaceDeformerOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMeshSpaceDeformerTool* SpaceDeformerTool;
    
    USpaceDeformerOperatorFactory();

};

