#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalBaseCampItemContainerType.h"
#include "PalContainerId.h"
#include "PalBaseCampItemContainerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampItemContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectConcreteModelInstanceId;
    
    UPROPERTY(VisibleInstanceOnly)
    EPalBaseCampItemContainerType Type;
    
private:
    UPROPERTY(VisibleInstanceOnly)
    FPalContainerId ContainerIdCache;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bShouldUseContainerIdCache;
    
public:
    PAL_API FPalBaseCampItemContainerInfo();
};

