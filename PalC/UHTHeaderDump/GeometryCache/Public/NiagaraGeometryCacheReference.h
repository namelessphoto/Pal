#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraUserParameterBinding -FallbackName=NiagaraUserParameterBinding
#include "NiagaraGeometryCacheReference.generated.h"

class UGeometryCache;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNiagaraGeometryCacheReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGeometryCache* GeometryCache;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding GeometryCacheUserParamBinding;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    GEOMETRYCACHE_API FNiagaraGeometryCacheReference();
};

