#ifndef UE4SS_SDK_LiveLinkMessageBusFramework_HPP
#define UE4SS_SDK_LiveLinkMessageBusFramework_HPP

struct FLiveLinkClearSubject
{
    FName SubjectName;

};

struct FLiveLinkConnectMessage
{
    int32 LiveLinkVersion;

};

struct FLiveLinkHeartbeatMessage
{
};

struct FLiveLinkPingMessage
{
    FGuid PollRequest;
    int32 LiveLinkVersion;

};

struct FLiveLinkPongMessage
{
    FString ProviderName;
    FString MachineName;
    FGuid PollRequest;
    int32 LiveLinkVersion;
    double CreationPlatformTime;

};

struct FLiveLinkSubjectDataMessage
{
    FLiveLinkRefSkeleton RefSkeleton;
    FName SubjectName;

};

struct FLiveLinkSubjectFrameMessage
{
    FName SubjectName;
    TArray<FTransform> Transforms;
    TArray<FLiveLinkCurveElement> Curves;
    FLiveLinkMetaData MetaData;
    double Time;

};

#endif
