#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PalMapObjectStaticMeshComponentBase.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectStaticMeshComponentBase : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalMapObjectStaticMeshComponentBase(const FObjectInitializer& ObjectInitializer);

};

