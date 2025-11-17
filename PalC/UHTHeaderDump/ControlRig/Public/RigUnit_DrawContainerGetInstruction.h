#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit.h"
#include "RigUnit_DrawContainerGetInstruction.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DrawContainerGetInstruction : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName InstructionName;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    FRigUnit_DrawContainerGetInstruction();
};

