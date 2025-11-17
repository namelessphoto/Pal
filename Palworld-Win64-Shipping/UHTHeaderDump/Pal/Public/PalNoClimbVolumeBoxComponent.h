#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "PalNoClimbVolumeInterface.h"
#include "PalNoClimbVolumeBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNoClimbVolumeBoxComponent : public UBoxComponent, public IPalNoClimbVolumeInterface {
    GENERATED_BODY()
public:
    UPalNoClimbVolumeBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

