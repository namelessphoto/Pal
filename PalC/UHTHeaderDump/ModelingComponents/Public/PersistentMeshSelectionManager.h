#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PersistentMeshSelectionManager.generated.h"

class UInteractiveToolsContext;
class UPersistentMeshSelection;
class UPreviewGeometry;

UCLASS(Deprecated, NotPlaceable)
class MODELINGCOMPONENTS_API UDEPRECATED_PersistentMeshSelectionManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInteractiveToolsContext* ParentContext;
    
    UPROPERTY()
    UPersistentMeshSelection* ActiveSelection;
    
    UPROPERTY()
    UPreviewGeometry* SelectionDisplay;
    
public:
    UDEPRECATED_PersistentMeshSelectionManager();

};

