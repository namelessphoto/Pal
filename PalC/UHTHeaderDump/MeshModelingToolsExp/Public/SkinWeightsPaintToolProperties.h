#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "SkinWeightsPaintToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBoneReference CurrentBone;
    
    USkinWeightsPaintToolProperties();


    // Fix for true pure virtual functions not being implemented
};

