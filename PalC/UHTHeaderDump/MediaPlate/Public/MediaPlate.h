#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MediaPlate.generated.h"

class UMediaPlateComponent;
class UStaticMeshComponent;

UCLASS()
class MEDIAPLATE_API AMediaPlate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMediaPlateComponent* MediaPlateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    AMediaPlate(const FObjectInitializer& ObjectInitializer);

};

