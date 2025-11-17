#pragma once
#include "CoreMinimal.h"
#include "BakeMultiMeshDetailProperties.generated.h"

class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct MESHMODELINGTOOLSEXP_API FBakeMultiMeshDetailProperties {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* SourceMesh;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SourceTexture;
    
    UPROPERTY(EditAnywhere)
    int32 SourceTextureUVLayer;
    
    FBakeMultiMeshDetailProperties();
};

