#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "IKRigSkeleton.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FIKRigSkeleton {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> ParentIndices;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> ExcludedBones;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTransform> CurrentPoseGlobal;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTransform> CurrentPoseLocal;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTransform> RefPoseGlobal;
    
    FIKRigSkeleton();
};

