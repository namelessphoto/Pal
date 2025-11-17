#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "OceanCollisionComponent.generated.h"

class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UOceanCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NonPIEDuplicateTransient)
    UBodySetup* CachedBodySetup;
    
public:
    UOceanCollisionComponent(const FObjectInitializer& ObjectInitializer);

};

