#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureFilter -FallbackName=TextureFilter
#include "EGLTFMaterialBakeSizePOT.h"
#include "EGLTFMaterialPropertyGroup.h"
#include "GLTFOverrideMaterialBakeSettings.h"
#include "GLTFProxyOptions.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class GLTFEXPORTER_API UGLTFProxyOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bBakeMaterialInputs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;
    
    UGLTFProxyOptions();

    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
};

