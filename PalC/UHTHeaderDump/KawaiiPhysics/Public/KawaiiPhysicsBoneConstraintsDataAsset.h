#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ModifyBoneConstraintData.h"
#include "KawaiiPhysicsBoneConstraintsDataAsset.generated.h"

UCLASS(BlueprintType)
class KAWAIIPHYSICS_API UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FModifyBoneConstraintData> BoneConstraintsData;
    
    UKawaiiPhysicsBoneConstraintsDataAsset();


    // Fix for true pure virtual functions not being implemented
};

