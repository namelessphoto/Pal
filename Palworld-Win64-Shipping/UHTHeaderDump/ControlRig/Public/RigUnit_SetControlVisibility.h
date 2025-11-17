#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlVisibility.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetControlVisibility : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bVisible;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    FRigUnit_SetControlVisibility();
};

