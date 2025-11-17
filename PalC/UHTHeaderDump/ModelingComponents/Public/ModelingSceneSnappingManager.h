#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SceneSnappingManager -FallbackName=SceneSnappingManager
#include "ModelingSceneSnappingManager.generated.h"

class UInteractiveToolsContext;

UCLASS()
class MODELINGCOMPONENTS_API UModelingSceneSnappingManager : public USceneSnappingManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInteractiveToolsContext* ParentContext;
    
public:
    UModelingSceneSnappingManager();

};

