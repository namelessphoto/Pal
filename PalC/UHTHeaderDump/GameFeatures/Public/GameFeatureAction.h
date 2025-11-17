#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameFeatureAction.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class GAMEFEATURES_API UGameFeatureAction : public UObject {
    GENERATED_BODY()
public:
    UGameFeatureAction();

};

