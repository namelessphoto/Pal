#pragma once
#include "CoreMinimal.h"
#include "FoliageType.h"
#include "Templates/SubclassOf.h"
#include "FoliageType_Actor.generated.h"

class AActor;
class UFoliageInstancedStaticMeshComponent;

UCLASS(EditInlineNew, MinimalAPI)
class UFoliageType_Actor : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> actorClass;
    
    UPROPERTY(EditAnywhere)
    bool bShouldAttachToBaseComponent;
    
    UPROPERTY(EditAnywhere)
    bool bStaticMeshOnly;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFoliageInstancedStaticMeshComponent> StaticMeshOnlyComponentClass;
    
    UFoliageType_Actor();

};

