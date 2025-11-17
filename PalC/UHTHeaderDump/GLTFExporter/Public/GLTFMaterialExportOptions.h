#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "EGLTFMaterialPropertyGroup.h"
#include "GLTFOverrideMaterialBakeSettings.h"
#include "GLTFMaterialExportOptions.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, EditInlineNew)
class GLTFEXPORTER_API UGLTFMaterialExportOptions : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Proxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGLTFOverrideMaterialBakeSettings Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs;
    
    UGLTFMaterialExportOptions();

};

