#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WeldMeshEdgesOperatorFactory.generated.h"

class UWeldMeshEdgesTool;

UCLASS()
class MESHMODELINGTOOLSEXP_API UWeldMeshEdgesOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWeldMeshEdgesTool* WeldMeshEdgesTool;
    
    UWeldMeshEdgesOperatorFactory();

};

