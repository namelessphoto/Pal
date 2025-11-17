#pragma once
#include "CoreMinimal.h"
#include "CompositingParamPayload.h"
#include "NamedCompMaterialParam.h"
#include "CompositingMaterial.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct COMPOSURE_API FCompositingMaterial : public FCompositingParamPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> ParamPassMappings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FNamedCompMaterialParam> RequiredMaterialParams;
    
private:
    UPROPERTY(SkipSerialization, Transient)
    UMaterialInstanceDynamic* CachedMID;
    
public:
    FCompositingMaterial();
};

