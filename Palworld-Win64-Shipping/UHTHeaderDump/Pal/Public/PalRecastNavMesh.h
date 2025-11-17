#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "PalRecastNavMesh.generated.h"

UCLASS()
class APalRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    APalRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

