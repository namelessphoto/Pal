#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraRendererProperties -FallbackName=NiagaraRendererProperties
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraVariableAttributeBinding -FallbackName=NiagaraVariableAttributeBinding
#include "NiagaraGeometryCacheReference.h"
#include "NiagaraGeometryCacheRendererProperties.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraGeometryCacheReference> GeometryCaches;
    
    UPROPERTY(EditAnywhere)
    bool bIsLooping;
    
    UPROPERTY(EditAnywhere)
    uint32 ComponentCountLimit;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RotationBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ScaleBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ElapsedTimeBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ArrayIndexBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UPROPERTY(EditAnywhere)
    int32 RendererVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAssignComponentsOnParticleID;
    
    UNiagaraGeometryCacheRendererProperties();

};

