#pragma once
#include "CoreMinimal.h"
#include "EBaseCreateFromSelectedTargetType.h"
#include "OnAcceptHandleSourcesProperties.h"
#include "BaseCreateFromSelectedHandleSourceProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    
    UPROPERTY(EditAnywhere)
    FString OutputNewName;
    
    UPROPERTY(VisibleAnywhere)
    FString OutputExistingName;
    
    UBaseCreateFromSelectedHandleSourceProperties();

};

