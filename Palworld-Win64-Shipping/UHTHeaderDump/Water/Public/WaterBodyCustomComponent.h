#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyCustomComponent.generated.h"

class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyCustomComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    UStaticMeshComponent* MeshComp;
    
public:
    UWaterBodyCustomComponent(const FObjectInitializer& ObjectInitializer);

};

