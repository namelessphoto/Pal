#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectItemProvider.generated.h"

UCLASS()
class PAL_API APalLevelObjectItemProvider : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData ProvidableStaticItemId;
    
public:
    APalLevelObjectItemProvider(const FObjectInitializer& ObjectInitializer);

};

