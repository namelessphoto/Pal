#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigControlPose.h"
#include "ControlRigPoseAsset.generated.h"

class UControlRig;

UCLASS(BlueprintType)
class CONTROLRIG_API UControlRigPoseAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FControlRigControlPose Pose;
    
    UControlRigPoseAsset();

    UFUNCTION(BlueprintCallable)
    void SelectControls(UControlRig* InControlRig, bool bDoMirror);
    
    UFUNCTION(BlueprintCallable)
    void SavePose(UControlRig* InControlRig, bool bUseAll);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceControlName(const FName& CurrentName, const FName& NewName);
    
    UFUNCTION(BlueprintCallable)
    void PastePose(UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentPose(UControlRig* InControlRig, FControlRigControlPose& OutPose);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetControlNames() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesMirrorMatch(UControlRig* ControlRig, const FName& ControlName) const;
    
};

