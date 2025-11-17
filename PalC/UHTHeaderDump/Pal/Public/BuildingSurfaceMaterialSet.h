#pragma once
#include "CoreMinimal.h"
#include "BuildingSurfaceMaterialSet.generated.h"

class UCurveFloat;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FBuildingSurfaceMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Highlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* BuildComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Dismantle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BuildCompleteAnimationCurve;
    
    PAL_API FBuildingSurfaceMaterialSet();
};

