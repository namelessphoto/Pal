#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CRFourPointBezier.h"
#include "RigElementKey.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_DebugBezierItemSpace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCRFourPointBezier Bezier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bEnabled;
    
    FRigUnit_DebugBezierItemSpace();
};

