#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigUnitDebugTransformMode.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_DebugTransformArrayMutable_WorkData.h"
#include "RigUnit_DebugTransformArrayMutable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigUnitDebugTransformMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bEnabled;
    
    UPROPERTY(Transient)
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;
    
    FRigUnit_DebugTransformArrayMutable();
};

