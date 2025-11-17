#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetAnimationChannelBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetAnimationChannelBase : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY()
    FRigElementKey CachedChannelKey;
    
    UPROPERTY()
    int32 CachedChannelHash;
    
    FRigUnit_GetAnimationChannelBase();
};

