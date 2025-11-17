#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraDataInterfaceSplineLUT.generated.h"

USTRUCT()
struct FNiagaraDataInterfaceSplineLUT {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Positions;
    
    UPROPERTY()
    TArray<FVector> Scales;
    
    UPROPERTY()
    TArray<FQuat> Rotations;
    
    UPROPERTY()
    float SplineLength;
    
    UPROPERTY()
    float SplineDistanceStep;
    
    UPROPERTY()
    float InvSplineDistanceStep;
    
    UPROPERTY()
    int32 MaxIndex;
    
    NIAGARA_API FNiagaraDataInterfaceSplineLUT();
};

