#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PalDataTableRowName_ItemData.h"
#include "PalRandomIncidentPlacementDropItemDataComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRandomIncidentPlacementDropItemDataComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData ItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 itemNum;
    
    UPalRandomIncidentPlacementDropItemDataComponent(const FObjectInitializer& ObjectInitializer);

};

