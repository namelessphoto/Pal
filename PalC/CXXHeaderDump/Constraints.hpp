#ifndef UE4SS_SDK_Constraints_HPP
#define UE4SS_SDK_Constraints_HPP

#include "Constraints_enums.hpp"

struct FConstraintAndActiveChannel
{
    TSoftObjectPtr<UTickableConstraint> Constraint;
    FMovieSceneConstraintChannel ActiveChannel;
    class UTickableConstraint* ConstraintCopyToSpawn;

};

struct FConstraintTickFunction : public FTickFunction
{
};

struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{
};

class AConstraintsActor : public AActor
{
    class UConstraintsManager* ConstraintsManager;

};

class UConstraintsManager : public UObject
{
    FConstraintsManagerOnConstraintAdded_BP OnConstraintAdded_BP;
    void OnConstraintAdded(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint);
    FConstraintsManagerOnConstraintRemoved_BP OnConstraintRemoved_BP;
    void OnConstraintRemoved(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    TArray<class UTickableConstraint*> Constraints;

};

class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveConstraint(class UWorld* InWorld, int32 InIndex);
    class UConstraintsManager* GetManager(class UWorld* InWorld);
    class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const FName& InSocketName);
    class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, const ETransformConstraintType InType);
    bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, const bool bMaintainOffset);
};

class UTickableConstraint : public UObject
{
    FConstraintTickFunction ConstraintTick;
    bool Active;

};

class UTickableLookAtConstraint : public UTickableTransformConstraint
{
    FVector Axis;

};

class UTickableParentConstraint : public UTickableTransformConstraint
{
    FTransform OffsetTransform;
    bool bScaling;

};

class UTickableRotationConstraint : public UTickableTransformConstraint
{
    FQuat OffsetRotation;

};

class UTickableScaleConstraint : public UTickableTransformConstraint
{
    FVector OffsetScale;

};

class UTickableTransformConstraint : public UTickableConstraint
{
    class UTransformableHandle* ParentTRSHandle;
    class UTransformableHandle* ChildTRSHandle;
    bool bMaintainOffset;
    float Weight;
    bool bDynamicOffset;
    ETransformConstraintType Type;

};

class UTickableTranslationConstraint : public UTickableTransformConstraint
{
    FVector OffsetTranslation;

};

class UTransformableComponentHandle : public UTransformableHandle
{
    TWeakObjectPtr<class USceneComponent> Component;
    FName SocketName;

};

class UTransformableHandle : public UObject
{
    FMovieSceneObjectBindingID ConstraintBindingID;

};

#endif
