#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "PalFindEnemyOption.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalFindEnemyOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckAimTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFilterByHateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLineTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    FPalFindEnemyOption();
};

