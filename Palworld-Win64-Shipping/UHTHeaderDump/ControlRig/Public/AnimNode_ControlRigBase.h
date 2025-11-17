#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_CustomProperty -FallbackName=AnimNode_CustomProperty
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "ControlRigAnimNodeEventName.h"
#include "ControlRigIOSettings.h"
#include "AnimNode_ControlRigBase.generated.h"

class UNodeMappingContainer;

USTRUCT()
struct CONTROLRIG_API FAnimNode_ControlRigBase : public FAnimNode_CustomProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bResetInputPoseToInitial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTransferInputPose;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTransferInputCurves;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTransferPoseInGlobalSpace;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FBoneReference> InputBonesToTransfer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;
    
    UPROPERTY(Transient)
    FControlRigIOSettings InputSettings;
    
    UPROPERTY(Transient)
    FControlRigIOSettings OutputSettings;
    
    UPROPERTY(Transient)
    bool bExecute;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FControlRigAnimNodeEventName> EventQueue;
    
public:
    FAnimNode_ControlRigBase();
};

