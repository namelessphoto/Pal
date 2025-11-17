#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalWorkAssignType.h"
#include "PalWorkAssignHandleId.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignHandleId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    FGuid WorkId;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 LocationIndex;
    
    UPROPERTY(VisibleInstanceOnly)
    EPalWorkAssignType AssignType;
    
public:
    PAL_API FPalWorkAssignHandleId();
};

