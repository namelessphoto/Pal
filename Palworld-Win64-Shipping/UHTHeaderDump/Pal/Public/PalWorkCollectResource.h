#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkCollectResource.generated.h"

UCLASS()
class PAL_API UPalWorkCollectResource : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bWorkingForNonActor;
    
public:
    UPalWorkCollectResource();

};

