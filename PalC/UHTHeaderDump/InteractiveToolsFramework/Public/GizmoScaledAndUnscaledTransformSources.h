#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoScaledAndUnscaledTransformSources.generated.h"

class IGizmoTransformSource;
class UGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> ScaledTransformSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> UnscaledTransformSource;
    
    UGizmoScaledAndUnscaledTransformSources();

};

