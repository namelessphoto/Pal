#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataStaticMesh.generated.h"

class UStaticMesh;

UCLASS()
class UPalSkinDataStaticMesh : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPalSkinDataStaticMesh();

};

