#pragma once
#include "CoreMinimal.h"
#include "PalHiddenAreaBase.h"
#include "PalHiddenAreaBox.generated.h"

class UPalHiddenBoxComponent;

UCLASS()
class PAL_API APalHiddenAreaBox : public APalHiddenAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalHiddenBoxComponent* HiddenBoxComponent;
    
    APalHiddenAreaBox(const FObjectInitializer& ObjectInitializer);

};

