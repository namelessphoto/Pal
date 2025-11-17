#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "TriangleSetComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODELINGCOMPONENTS_API UTriangleSetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FBoxSphereBounds Bounds;
    
    UPROPERTY()
    bool bBoundsDirty;
    
public:
    UTriangleSetComponent(const FObjectInitializer& ObjectInitializer);

};

