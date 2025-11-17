#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECollisionGeometryMode.h"
#include "PhysicsBoxData.h"
#include "PhysicsCapsuleData.h"
#include "PhysicsConvexData.h"
#include "PhysicsLevelSetData.h"
#include "PhysicsSphereData.h"
#include "PhysicsObjectToolPropertySet.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ObjectName;
    
    UPROPERTY(VisibleAnywhere)
    ECollisionGeometryMode CollisionType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhysicsSphereData> Spheres;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhysicsBoxData> Boxes;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhysicsCapsuleData> Capsules;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhysicsConvexData> Convexes;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhysicsLevelSetData> LevelSets;
    
    UPhysicsObjectToolPropertySet();

};

