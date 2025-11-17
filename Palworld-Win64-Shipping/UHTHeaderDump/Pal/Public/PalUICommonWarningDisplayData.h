#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalUICommonWarningType.h"
#include "PalUICommonWarningDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUICommonWarningDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalUICommonWarningType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid PreserveID;
    
    PAL_API FPalUICommonWarningDisplayData();
};

