#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENiagaraMeshPivotOffsetSpace.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraMeshRendererMeshProperties.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraMeshRendererMeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding UserParamBinding;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector PivotOffset;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;
    
    FNiagaraMeshRendererMeshProperties();
};

