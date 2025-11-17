#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "BoneChain.generated.h"

USTRUCT()
struct IKRIG_API FBoneChain {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ChainName;
    
    UPROPERTY(VisibleAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(VisibleAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(VisibleAnywhere)
    FName IKGoalName;
    
    FBoneChain();
};

