#pragma once
#include "CoreMinimal.h"
#include "EHandleSourcesMethod.h"
#include "OnAcceptHandleSourcesPropertiesBase.h"
#include "OnAcceptHandleSourcesPropertiesSingle.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHandleSourcesMethod HandleInputs;
    
    UOnAcceptHandleSourcesPropertiesSingle();

};

