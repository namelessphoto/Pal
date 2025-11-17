#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuComputeTickStage.generated.h"

UENUM()
    PreInitViews,
    PostInitViews,
    PostOpaqueRender,
    Max,
    First = PreInitViews,
    Last = PostOpaqueRender,
};

