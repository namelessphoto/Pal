#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataMaterials.generated.h"

class UMaterialInterface;

UCLASS()
class UPalSkinDataMaterials : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPalSkinDataMaterials();

};

