#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RemoveOccludedTrianglesOperatorFactory.generated.h"

class URemoveOccludedTrianglesTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API URemoveOccludedTrianglesOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    URemoveOccludedTrianglesTool* Tool;
    
    URemoveOccludedTrianglesOperatorFactory();

};

