#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometrySelectionManager.generated.h"

class UGeometrySelectionEditCommandArguments;
class UInteractiveToolsContext;
class UPersistentMeshSelection;

UCLASS()
class MODELINGCOMPONENTS_API UGeometrySelectionManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGeometrySelectionEditCommandArguments* SelectionArguments;
    
    UPROPERTY()
    UInteractiveToolsContext* ToolsContext;
    
    UPROPERTY()
    UPersistentMeshSelection* OldSelection;
    
public:
    UGeometrySelectionManager();

};

