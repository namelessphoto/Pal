#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameReplace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NameReplace : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName New;
    
    UPROPERTY(BlueprintReadOnly)
    FName Result;
    
    FRigUnit_NameReplace();
};

