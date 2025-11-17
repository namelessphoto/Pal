#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=GeometrySelectionEditCommand -FallbackName=GeometrySelectionEditCommand
#include "DeleteGeometrySelectionCommand.generated.h"

UCLASS()
class MESHMODELINGTOOLS_API UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand {
    GENERATED_BODY()
public:
    UDeleteGeometrySelectionCommand();

};

