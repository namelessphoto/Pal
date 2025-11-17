#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalCurveBall.h"
#include "PalCurveBallTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCurveBallTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalCurveBall CurveID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D InitVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D CurveVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CurveInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForwardVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GravityScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GravityInterval;
    
    PAL_API FPalCurveBallTableRow();
};

