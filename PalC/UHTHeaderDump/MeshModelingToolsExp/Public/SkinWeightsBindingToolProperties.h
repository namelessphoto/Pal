#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESkinWeightsBindType.h"
#include "SkinWeightsBindingToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBoneReference CurrentBone;
    
    UPROPERTY(EditAnywhere)
    ESkinWeightsBindType BindingType;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInfluences;
    
    UPROPERTY(EditAnywhere)
    int32 VoxelResolution;
    
    USkinWeightsBindingToolProperties();


    // Fix for true pure virtual functions not being implemented
};

