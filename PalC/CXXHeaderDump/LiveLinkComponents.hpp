#ifndef UE4SS_SDK_LiveLinkComponents_HPP
#define UE4SS_SDK_LiveLinkComponents_HPP

struct FLiveLinkTransformControllerData
{
    bool bWorldTransform;
    bool bUseLocation;
    bool bUseRotation;
    bool bUseScale;
    bool bSweep;
    bool bTeleport;

};

class ULiveLinkComponentController : public UActorComponent
{
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    TMap<class TSubclassOf<ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;
    bool bUpdateInEditor;
    FLiveLinkComponentControllerOnLiveLinkUpdated OnLiveLinkUpdated;
    void LiveLinkTickDelegate(float DeltaTime);
    FLiveLinkComponentControllerOnControllerMapUpdatedDelegate OnControllerMapUpdatedDelegate;
    void OnControllerMapUpdatedDelegate();
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    bool bEvaluateLiveLink;
    bool bUpdateInPreviewEditor;

    void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);
    FLiveLinkSubjectRepresentation GetSubjectRepresentation();
};

class ULiveLinkComponentSettings : public UObject
{
    TMap<class TSubclassOf<ULiveLinkRole>, class TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole;

};

class ULiveLinkControllerBase : public UObject
{
    FComponentReference ComponentPicker;

};

class ULiveLinkLightController : public ULiveLinkControllerBase
{
};

class ULiveLinkTransformController : public ULiveLinkControllerBase
{
    FLiveLinkTransformControllerData TransformData;

};

#endif
