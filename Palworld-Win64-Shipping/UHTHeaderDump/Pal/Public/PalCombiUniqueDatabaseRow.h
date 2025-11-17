#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalGenderType.h"
#include "EPalTribeID.h"
#include "PalCombiUniqueDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCombiUniqueDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalTribeID ParentTribeA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalGenderType ParentGenderA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalTribeID ParentTribeB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalGenderType ParentGenderB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ChildCharacterID;
    
    PAL_API FPalCombiUniqueDatabaseRow();
};

