#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalWorkType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalPassiveSkillParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    UPROPERTY(EditAnywhere)
    EPalWorkType WorkType;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_MapObjectData> MapObjectId;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_ItemData> ItemId;
    
    UPROPERTY(EditAnywhere)
    bool AssignOthers;
    
    UPROPERTY(EditAnywhere)
    EPalElementType TargetElementType;
    
    PAL_API FPalPassiveSkillParameters();
};

