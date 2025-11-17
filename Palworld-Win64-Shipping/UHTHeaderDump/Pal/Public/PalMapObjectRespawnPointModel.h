#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRespawnPointModel.generated.h"

UCLASS()
class PAL_API UPalMapObjectRespawnPointModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid LocationId;
    
public:
    UPalMapObjectRespawnPointModel();

};

