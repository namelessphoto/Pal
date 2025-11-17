#pragma once
#include "CoreMinimal.h"
#include "EClusterUnionMethod.generated.h"

UENUM()
    PointImplicit,
    DelaunayTriangulation,
    MinimalSpanningSubsetDelaunayTriangulation,
    PointImplicitAugmentedWithMinimalDelaunay,
    BoundsOverlapFilteredDelaunayTriangulation,
    None,
};

