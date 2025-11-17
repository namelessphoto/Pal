#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeTextureResolution.h"
#include "RenderCaptureProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URenderCaptureProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBakeTextureResolution Resolution;
    
    UPROPERTY(EditAnywhere)
    bool bBaseColorMap;
    
    UPROPERTY(EditAnywhere)
    bool bNormalMap;
    
    UPROPERTY(EditAnywhere)
    bool bPackedMRSMap;
    
    UPROPERTY(EditAnywhere)
    bool bMetallicMap;
    
    UPROPERTY(EditAnywhere)
    bool bRoughnessMap;
    
    UPROPERTY(EditAnywhere)
    bool bSpecularMap;
    
    UPROPERTY(EditAnywhere)
    bool bEmissiveMap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAntiAliasing;
    
    UPROPERTY()
    float CaptureFieldOfView;
    
    UPROPERTY()
    float NearPlaneDist;
    
    UPROPERTY()
    bool bDeviceDepthMap;
    
    URenderCaptureProperties();

};

