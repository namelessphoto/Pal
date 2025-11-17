#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInputObjectType.generated.h"

UENUM()
    Invalid,
    Object,
    StaticMesh,
    SkeletalMesh,
    SceneComponent,
    StaticMeshComponent,
    InstancedStaticMeshComponent,
    SplineComponent,
    HoudiniSplineComponent,
    HoudiniAssetComponent,
    Actor,
    Landscape,
    Brush,
    CameraComponent,
    DataTable,
    HoudiniAssetActor,
    FoliageType_InstancedStaticMesh,
    GeometryCollection,
    GeometryCollectionComponent,
    GeometryCollectionActor_Deprecated,
    SkeletalMeshComponent,
    LandscapeSplineActor,
    LandscapeSplinesComponent,
    Blueprint,
    Animation,
    SplineMeshComponent,
    LevelInstance,
    PackedLevelActor,
};

