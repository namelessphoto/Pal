#pragma once
#include "CoreMinimal.h"
#include "PalUIGuildLabModel.h"
#include "PalUIGuildLabModel_ByMapObject.generated.h"

class UPalMapObjectLabModel;

UCLASS()
class PAL_API UPalUIGuildLabModel_ByMapObject : public UPalUIGuildLabModel {
    GENERATED_BODY()
public:
    UPalUIGuildLabModel_ByMapObject();

protected:
    UFUNCTION()
    void OnResearchChanged(UPalMapObjectLabModel* Model);
    
};

