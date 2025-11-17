#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraRendererProperties.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraLightRendererProperties.generated.h"

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsTranslucency: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlphaScalesBrightness: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideInverseExposureBlend: 1;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    float DefaultExponent;
    
    UPROPERTY(EditAnywhere)
    FVector3f ColorAdd;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float InverseExposureBlend;
    
    UPROPERTY(EditAnywhere)
    int32 RendererVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightExponentBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RadiusBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UNiagaraLightRendererProperties();

};

