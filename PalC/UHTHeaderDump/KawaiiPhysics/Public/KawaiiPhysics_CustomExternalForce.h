#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AnimNode_KawaiiPhysics.h"
#include "KawaiiPhysics_CustomExternalForce.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class KAWAIIPHYSICS_API UKawaiiPhysics_CustomExternalForce : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
    UKawaiiPhysics_CustomExternalForce();

    UFUNCTION(BlueprintNativeEvent)
    void PreApply(UPARAM(Ref) FAnimNode_KawaiiPhysics& Node, const USkeletalMeshComponent* SkelComp);
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void Apply(UPARAM(Ref) FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const USkeletalMeshComponent* SkelComp, const FTransform& BoneTransform);
    
};

