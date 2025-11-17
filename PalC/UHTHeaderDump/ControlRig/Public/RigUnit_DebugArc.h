#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_DebugArc.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bEnabled;
    
    FRigUnit_DebugArc();
};

