#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "SelfUnionMeshesTool.generated.h"

class ULineSetComponent;
class USelfUnionMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USelfUnionMeshesTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USelfUnionMeshesToolProperties* Properties;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnLineSet;
    
public:
    USelfUnionMeshesTool();

};

