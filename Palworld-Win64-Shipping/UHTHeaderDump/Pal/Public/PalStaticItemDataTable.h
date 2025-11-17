#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticItemDataTable.generated.h"

class UPalStaticItemDataAsset;

UCLASS()
class UPalStaticItemDataTable : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPalStaticItemDataAsset* DataAsset;
    
public:
    UPalStaticItemDataTable();

};

