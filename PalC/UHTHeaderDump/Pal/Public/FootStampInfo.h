#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalFootType.h"
#include "FootStampInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFootStampInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPalFootType, UMaterialInterface*> FootstepDecalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FootstepDecal_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator FootstepDecal_InitialRotation;
    
    PAL_API FFootStampInfo();
};

