#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalWorkBase.h"
#include "PalWorkRepair.generated.h"

class UPalMapObjectModel;

UCLASS()
class UPalWorkRepair : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    FGuid ConnectToModelInstanceId;
    
    UPROPERTY(Transient)
    TArray<UPalMapObjectModel*> ConnectedModels;
    
public:
    UPalWorkRepair();

};

