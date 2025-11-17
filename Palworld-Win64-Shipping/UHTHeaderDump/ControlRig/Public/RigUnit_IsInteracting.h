#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_IsInteracting.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_IsInteracting : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsInteracting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsTranslating;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsRotating;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsScaling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    TArray<FRigElementKey> Items;
    
    FRigUnit_IsInteracting();
};

