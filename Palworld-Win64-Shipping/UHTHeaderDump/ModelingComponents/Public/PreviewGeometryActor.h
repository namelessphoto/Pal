#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InternalToolFrameworkActor -FallbackName=InternalToolFrameworkActor
#include "PreviewGeometryActor.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API APreviewGeometryActor : public AInternalToolFrameworkActor {
    GENERATED_BODY()
public:
    APreviewGeometryActor(const FObjectInitializer& ObjectInitializer);

};

