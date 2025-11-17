#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateMeshObjectResult.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct MODELINGCOMPONENTS_API FCreateMeshObjectResult {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(VisibleAnywhere)
    AActor* NewActor;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPrimitiveComponent* NewComponent;
    
    UPROPERTY(VisibleAnywhere)
    UObject* NewAsset;
    
    FCreateMeshObjectResult();
};

