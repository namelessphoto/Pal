#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEditorPalBedConfirmNamePlate.generated.h"

UCLASS()
class PAL_API APalEditorPalBedConfirmNamePlate : public AActor {
    GENERATED_BODY()
public:
    APalEditorPalBedConfirmNamePlate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(const FName CharacterID);
    
};

