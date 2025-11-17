#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigClampSpatialMode.h"
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorClampSpatially.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis> Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EControlRigClampSpatialMode> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugThickness;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    FRigUnit_MathVectorClampSpatially();
};

