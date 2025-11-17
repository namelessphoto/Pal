#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRandomIncidentPlacementEggDataComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRandomIncidentPlacementEggDataComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalMonsterId;
    
    UPalRandomIncidentPlacementEggDataComponent(const FObjectInitializer& ObjectInitializer);

};

