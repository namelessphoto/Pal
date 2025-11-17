#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampItemExistsInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampItemExistsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MapObjectModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 itemNum;
    
    PAL_API FPalBaseCampItemExistsInfo();
};

