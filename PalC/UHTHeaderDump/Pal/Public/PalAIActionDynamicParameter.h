#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalWazaID.h"
#include "PalAIActionDynamicParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalAIActionDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* GeneralActor1;
    
    UPROPERTY(BlueprintReadWrite)
    FVector GeneralVector1;
    
    UPROPERTY(BlueprintReadWrite)
    FVector GeneralVector2;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GeneralIndex1;
    
    UPROPERTY(BlueprintReadWrite)
    bool GeneralBool1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GeneralInteger1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GeneralInteger2;
    
    UPROPERTY(BlueprintReadWrite)
    EPalWazaID SelfDestructWaza;
    
    PAL_API FPalAIActionDynamicParameter();
};

