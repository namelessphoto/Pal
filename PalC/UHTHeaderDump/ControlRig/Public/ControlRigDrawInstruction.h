#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigDrawSettings.h"
#include "ControlRigDrawInstruction.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigDrawInstruction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EControlRigDrawSettings> PrimitiveType;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> Positions;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    FControlRigDrawInstruction();
};

