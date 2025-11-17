#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EPalSizeType.h"
#include "PalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalSizeType, FVector> AdditionalLocationOffsetMapBySizeType;
    
    UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent(const FObjectInitializer& ObjectInitializer);

};

