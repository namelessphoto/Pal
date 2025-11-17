#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampWorkerTaskBase.generated.h"

UCLASS()
class PAL_API UPalBaseCampWorkerTaskBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerBaseCampId;
    
public:
    UPalBaseCampWorkerTaskBase();

};

