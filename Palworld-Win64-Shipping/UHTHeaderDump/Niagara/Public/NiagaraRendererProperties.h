#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "ENiagaraRendererMotionVectorSetting.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    int32 SortOrderHint;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RendererEnabledBinding;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bAllowInCullProxies;
    
    UPROPERTY()
    FGuid OuterEmitterVersion;
    
protected:
    UPROPERTY()
    bool bMotionBlurEnabled;
    
public:
    UNiagaraRendererProperties();

};

