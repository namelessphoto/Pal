#pragma once
#include "CoreMinimal.h"
#include "PalHiddenAreaBase.h"
#include "PalHiddenAreaCapsule.generated.h"

class UPalHiddenCapsuleComponent;

UCLASS()
class PAL_API APalHiddenAreaCapsule : public APalHiddenAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalHiddenCapsuleComponent* HiddenCapsuleComponent;
    
    APalHiddenAreaCapsule(const FObjectInitializer& ObjectInitializer);

};

