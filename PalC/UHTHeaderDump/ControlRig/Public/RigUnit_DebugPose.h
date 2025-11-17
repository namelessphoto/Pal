#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigPose.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_DebugPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DebugPose : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    FRigUnit_DebugPose();
};

