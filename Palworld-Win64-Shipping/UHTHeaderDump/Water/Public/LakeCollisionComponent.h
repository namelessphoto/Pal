#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LakeCollisionComponent.generated.h"

class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API ULakeCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NonPIEDuplicateTransient)
    UBodySetup* CachedBodySetup;
    
    UPROPERTY()
    FVector BoxExtent;
    
public:
    ULakeCollisionComponent(const FObjectInitializer& ObjectInitializer);

};

