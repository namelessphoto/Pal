#pragma once
#include "CoreMinimal.h"
#include "RigBoneHierarchy.h"
#include "RigControlHierarchy.h"
#include "RigCurveContainer.h"
#include "RigSpaceHierarchy.h"
#include "RigHierarchyContainer.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigHierarchyContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigBoneHierarchy BoneHierarchy;
    
    UPROPERTY()
    FRigSpaceHierarchy SpaceHierarchy;
    
    UPROPERTY()
    FRigControlHierarchy ControlHierarchy;
    
    UPROPERTY()
    FRigCurveContainer CurveContainer;
    
    FRigHierarchyContainer();
};

