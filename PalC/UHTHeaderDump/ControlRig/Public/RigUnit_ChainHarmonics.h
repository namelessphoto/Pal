#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RigUnit_ChainHarmonics_Pendulum.h"
#include "RigUnit_ChainHarmonics_Reach.h"
#include "RigUnit_ChainHarmonics_Wave.h"
#include "RigUnit_ChainHarmonics_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ChainHarmonics.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ChainRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_ChainHarmonics_Reach Reach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_ChainHarmonics_Wave Wave;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRuntimeFloatCurve WaveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform DrawWorldOffset;
    
    UPROPERTY(Transient)
    FRigUnit_ChainHarmonics_WorkData WorkData;
    
    FRigUnit_ChainHarmonics();
};

