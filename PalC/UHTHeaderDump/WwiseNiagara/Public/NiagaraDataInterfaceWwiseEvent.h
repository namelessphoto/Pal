#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceWwiseEvent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(EditInlineNew)
class WWISENIAGARA_API UNiagaraDataInterfaceWwiseEvent : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* EventToPost;
    
    UPROPERTY(EditAnywhere)
    TArray<UAkRtpc*> GameParameters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bLimitPostsPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxPostsPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStopWhenComponentIsDestroyed;
    
    UNiagaraDataInterfaceWwiseEvent();

};

