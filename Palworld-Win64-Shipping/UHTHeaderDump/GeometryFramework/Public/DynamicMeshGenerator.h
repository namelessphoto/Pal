#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicMeshGenerator.generated.h"

UCLASS(Abstract)
class GEOMETRYFRAMEWORK_API UDynamicMeshGenerator : public UObject {
    GENERATED_BODY()
public:
    UDynamicMeshGenerator();

};

