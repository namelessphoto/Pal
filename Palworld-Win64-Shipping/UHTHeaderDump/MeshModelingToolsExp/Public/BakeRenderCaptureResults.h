#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeRenderCaptureResults.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeRenderCaptureResults : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UTexture2D* BaseColorMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* NormalMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* PackedMRSMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* MetallicMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* RoughnessMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* SpecularMap;
    
    UPROPERTY(VisibleAnywhere)
    UTexture2D* EmissiveMap;
    
    UBakeRenderCaptureResults();

};

