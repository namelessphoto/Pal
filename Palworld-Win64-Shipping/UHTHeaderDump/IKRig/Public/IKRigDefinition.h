#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
#include "IKRigSkeleton.h"
#include "RetargetDefinition.h"
#include "IKRigDefinition.generated.h"

class UIKRigEffectorGoal;
class UIKRigSolver;
class USkeletalMesh;

UCLASS()
class IKRIG_API UIKRigDefinition : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    
    UPROPERTY()
    FIKRigSkeleton Skeleton;
    
private:
    UPROPERTY()
    TArray<UIKRigEffectorGoal*> Goals;
    
    UPROPERTY(Instanced)
    TArray<UIKRigSolver*> Solvers;
    
    UPROPERTY()
    FRetargetDefinition RetargetDefinition;
    
public:
    UIKRigDefinition();


    // Fix for true pure virtual functions not being implemented
};

