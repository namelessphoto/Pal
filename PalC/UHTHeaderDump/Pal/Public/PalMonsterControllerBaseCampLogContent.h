#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterControllerBaseCampLogType.h"
#include "PalInstanceID.h"
#include "PalMonsterControllerBaseCampLogContent.generated.h"

USTRUCT(BlueprintType)
struct FPalMonsterControllerBaseCampLogContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalMonsterControllerBaseCampLogType Type;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName TargetObjectTextId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalInstanceID InstanceId;
    
    PAL_API FPalMonsterControllerBaseCampLogContent();
};

