#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InternalToolFrameworkActor.generated.h"

UCLASS(NotPlaceable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API AInternalToolFrameworkActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsSelectableInEditor;
    
    AInternalToolFrameworkActor(const FObjectInitializer& ObjectInitializer);

};

