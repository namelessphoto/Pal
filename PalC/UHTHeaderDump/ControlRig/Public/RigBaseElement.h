#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigBaseElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBaseElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigElementKey Key;
    
    UPROPERTY(Transient)
    FString NameString;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SubIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bSelected;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CreatedAtInstructionIndex;
    
public:
    FRigBaseElement();
};

