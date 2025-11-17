#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalQuestFixedObjectiveLocationSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestFixedObjectiveLocationSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Range;
    
    PAL_API FPalQuestFixedObjectiveLocationSettingData();
};

