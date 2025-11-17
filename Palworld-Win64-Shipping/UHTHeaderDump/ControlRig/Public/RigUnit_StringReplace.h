#pragma once
#include "CoreMinimal.h"
#include "RigUnit_StringBase.h"
#include "RigUnit_StringReplace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StringReplace : public FRigUnit_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Old;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString New;
    
    UPROPERTY(BlueprintReadOnly)
    FString Result;
    
    FRigUnit_StringReplace();
};

