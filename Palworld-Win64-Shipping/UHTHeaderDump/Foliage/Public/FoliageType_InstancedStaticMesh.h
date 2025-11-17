#pragma once
#include "CoreMinimal.h"
#include "FoliageType.h"
#include "Templates/SubclassOf.h"
#include "FoliageType_InstancedStaticMesh.generated.h"

class UFoliageInstancedStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(EditInlineNew)
class FOLIAGE_API UFoliageType_InstancedStaticMesh : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> NaniteOverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;
    
    UFoliageType_InstancedStaticMesh();

};

