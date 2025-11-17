#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CreateMeshObjectParams.h"
#include "CreateMeshObjectResult.h"
#include "CreateTextureObjectParams.h"
#include "CreateTextureObjectResult.h"
#include "ModelingObjectsCreationAPI.generated.h"

UCLASS(Abstract, BlueprintType)
class MODELINGCOMPONENTS_API UModelingObjectsCreationAPI : public UObject {
    GENERATED_BODY()
public:
    UModelingObjectsCreationAPI();

    UFUNCTION(BlueprintCallable)
    FCreateTextureObjectResult CreateTextureObject(const FCreateTextureObjectParams& CreateTexParams);
    
    UFUNCTION(BlueprintCallable)
    FCreateMeshObjectResult CreateMeshObject(const FCreateMeshObjectParams& CreateMeshParams);
    
};

