#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "KawaiiPhysicsRootBoneSetting.generated.h"

USTRUCT()
struct KAWAIIPHYSICS_API FKawaiiPhysicsRootBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> OverrideExcludeBones;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrideExcludeBones;
    
    FKawaiiPhysicsRootBoneSetting();
};

