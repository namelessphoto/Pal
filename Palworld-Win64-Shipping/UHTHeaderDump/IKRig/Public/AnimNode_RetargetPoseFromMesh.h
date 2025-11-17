#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "RetargetProfile.h"
#include "AnimNode_RetargetPoseFromMesh.generated.h"

class UIKRetargetProcessor;
class UIKRetargeter;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct IKRIG_API FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAttachedParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIKRetargeter* IKRetargeterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FRetargetProfile CustomRetargetProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSuppressWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyCurves;
    
private:
    UPROPERTY(Transient)
    UIKRetargetProcessor* Processor;
    
public:
    FAnimNode_RetargetPoseFromMesh();
};

