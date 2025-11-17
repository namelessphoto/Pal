#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureFilter -FallbackName=TextureFilter
#include "EGLTFMaterialBakeSizePOT.h"
#include "GLTFOverrideMaterialBakeSettings.generated.h"

USTRUCT(BlueprintType)
struct FGLTFOverrideMaterialBakeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGLTFMaterialBakeSizePOT Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureFilter> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideTiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> Tiling;
    
    GLTFEXPORTER_API FGLTFOverrideMaterialBakeSettings();
};

