#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "PointSetComponent.generated.h"

class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODELINGCOMPONENTS_API UPointSetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaterialInterface* PointMaterial;
    
    UPROPERTY()
    FBoxSphereBounds Bounds;
    
    UPROPERTY()
    bool bBoundsDirty;
    
public:
    UPointSetComponent(const FObjectInitializer& ObjectInitializer);

};

