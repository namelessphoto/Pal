#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=BaseDynamicMeshComponent -FallbackName=BaseDynamicMeshComponent
#include "OctreeDynamicMeshComponent.generated.h"

class UDynamicMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODELINGCOMPONENTS_API UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UDynamicMesh* MeshObject;
    
public:
    UOctreeDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicMesh(UDynamicMesh* NewMesh);
    
};

