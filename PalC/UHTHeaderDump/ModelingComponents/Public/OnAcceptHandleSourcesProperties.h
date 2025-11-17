#pragma once
#include "CoreMinimal.h"
#include "EHandleSourcesMethod.h"
#include "OnAcceptHandleSourcesPropertiesBase.h"
#include "OnAcceptHandleSourcesProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EHandleSourcesMethod HandleInputs;
    
    UOnAcceptHandleSourcesProperties();

};

