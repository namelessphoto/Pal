#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeMapsToolBase.h"
#include "BakeRenderCaptureTool.generated.h"

class AActor;
class UBakeRenderCaptureInputToolProperties;
class UBakeRenderCaptureResults;
class UBakeRenderCaptureToolProperties;
class UMaterialInstanceDynamic;
class URenderCaptureProperties;
class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeRenderCaptureTool : public UBakeMeshAttributeMapsToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> Actors;
    
    UPROPERTY()
    UBakeRenderCaptureToolProperties* Settings;
    
    UPROPERTY()
    URenderCaptureProperties* RenderCaptureProperties;
    
    UPROPERTY()
    UBakeRenderCaptureInputToolProperties* InputMeshSettings;
    
    UPROPERTY()
    UBakeRenderCaptureResults* ResultSettings;
    
    UPROPERTY()
    UTexture2D* EmptyEmissiveMap;
    
    UPROPERTY()
    UTexture2D* EmptyPackedMRSMap;
    
    UPROPERTY()
    UTexture2D* EmptyRoughnessMap;
    
    UPROPERTY()
    UTexture2D* EmptyMetallicMap;
    
    UPROPERTY()
    UTexture2D* EmptySpecularMap;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewMaterialRC;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewMaterialPackedRC;
    
    UPROPERTY()
    URenderCaptureProperties* ComputedRenderCaptureProperties;
    
public:
    UBakeRenderCaptureTool();

};

