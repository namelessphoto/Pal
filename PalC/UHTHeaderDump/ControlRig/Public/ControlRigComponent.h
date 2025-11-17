#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "ControlRigComponentDelegateDelegate.h"
#include "ControlRigComponentMappedBone.h"
#include "ControlRigComponentMappedComponent.h"
#include "ControlRigComponentMappedCurve.h"
#include "ControlRigComponentMappedElement.h"
#include "EControlRigComponentSpace.h"
#include "ERigElementType.h"
#include "Templates/SubclassOf.h"
#include "ControlRigComponent.generated.h"

class UControlRig;
class UControlRigComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONTROLRIG_API UControlRigComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPreInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPreConstructionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostConstructionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPreForwardsSolveDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FControlRigComponentDelegate OnPostForwardsSolveDelegate;
    
    UPROPERTY(EditAnywhere)
    TArray<FControlRigComponentMappedElement> UserDefinedElements;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FControlRigComponentMappedElement> MappedElements;
    
    UPROPERTY(EditAnywhere)
    bool bEnableLazyEvaluation;
    
    UPROPERTY(EditAnywhere)
    float LazyEvaluationPositionThreshold;
    
    UPROPERTY(EditAnywhere)
    float LazyEvaluationRotationThreshold;
    
    UPROPERTY(EditAnywhere)
    float LazyEvaluationScaleThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bResetTransformBeforeTick;
    
    UPROPERTY(EditAnywhere)
    bool bResetInitialsBeforeConstruction;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateRigOnTick;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateInEditor;
    
    UPROPERTY(EditAnywhere)
    bool bDrawBones;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugDrawing;
    
private:
    UPROPERTY(Transient)
    UControlRig* ControlRig;
    
public:
    UControlRigComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectBinding(UObject* InObjectToBind);
    
    UFUNCTION(BlueprintCallable)
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace space, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetControlVector2D(FName ControlName, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRigClass(TSubclassOf<UControlRig> InControlRigClass);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    void SetControlInt(FName ControlName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlFloat(FName ControlName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetControlBool(FName ControlName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace space, float Weight, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreInitialize(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreForwardsSolve(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPreConstruction(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostInitialize(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostForwardsSolve(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostConstruction(UControlRigComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetElementNames(ERigElementType ElementType);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetControlVector2D(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    UControlRig* GetControlRig();
    
    UFUNCTION(BlueprintPure)
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    int32 GetControlInt(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    float GetControlFloat(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    bool GetControlBool(FName ControlName);
    
    UFUNCTION(BlueprintPure)
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace space);
    
    UFUNCTION(BlueprintPure)
    float GetAbsoluteTime() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    
    UFUNCTION(BlueprintCallable)
    void ClearMappedElements();
    
    UFUNCTION(BlueprintPure)
    bool CanExecute();
    
    UFUNCTION(BlueprintCallable)
    void AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    
    UFUNCTION(BlueprintCallable)
    void AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

