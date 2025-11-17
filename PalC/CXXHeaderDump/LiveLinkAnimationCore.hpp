#ifndef UE4SS_SDK_LiveLinkAnimationCore_HPP
#define UE4SS_SDK_LiveLinkAnimationCore_HPP

struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
    FPoseLink InputPose;
    FLiveLinkSubjectName LiveLinkSubjectName;
    TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset;
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;

};

struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
    FAnimNode_LiveLinkPose PoseNode;

};

class ULiveLinkInstance : public UAnimInstance
{
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;

    void SetSubject(FLiveLinkSubjectName SubjectName);
    void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
};

class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

    void RemapCurveElements(TMap<FName, float>& CurveItems);
    FName GetRemappedCurveName(FName CurveName);
    FName GetRemappedBoneName(FName BoneName);
};

class ULiveLinkRetargetAsset : public UObject
{
};

#endif
