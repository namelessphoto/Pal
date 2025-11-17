#pragma once
#include "CoreMinimal.h"
#include "PalRandomIncidentGroupRequestParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentGroupRequestParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Group;
    
    PAL_API FPalRandomIncidentGroupRequestParameter();
};

