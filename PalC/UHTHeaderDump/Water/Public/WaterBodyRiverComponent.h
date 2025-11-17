#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyRiverComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USplineMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyRiverComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* LakeTransitionMaterial;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* LakeTransitionMID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* OceanTransitionMaterial;
    
    UPROPERTY(NonPIEDuplicateTransient, TextExportTransient, Transient, VisibleInstanceOnly)
    UMaterialInstanceDynamic* OceanTransitionMID;
    
public:
    UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer);

};

