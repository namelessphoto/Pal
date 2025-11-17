#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "GeometryCollectionEmbeddedExemplar.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionEmbeddedExemplar {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath StaticMeshExemplar;
    
    UPROPERTY(EditAnywhere)
    float StartCullDistance;
    
    UPROPERTY(EditAnywhere)
    float EndCullDistance;
    
    UPROPERTY(VisibleAnywhere)
    int32 InstanceCount;
    
    FGeometryCollectionEmbeddedExemplar();
};

