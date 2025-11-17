#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveCommand -FallbackName=InteractiveCommand
#include "GeometrySelectionEditCommand.generated.h"

UCLASS(Abstract)
class MODELINGCOMPONENTS_API UGeometrySelectionEditCommand : public UInteractiveCommand {
    GENERATED_BODY()
public:
    UGeometrySelectionEditCommand();

};

