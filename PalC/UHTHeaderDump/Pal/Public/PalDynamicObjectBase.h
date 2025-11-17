#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDynamicObjectBase.generated.h"

UCLASS()
class APalDynamicObjectBase : public AActor {
    GENERATED_BODY()
public:
    APalDynamicObjectBase(const FObjectInitializer& ObjectInitializer);

};

