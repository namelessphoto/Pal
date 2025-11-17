#include "LiveLinkComponent.h"

ULiveLinkComponent::ULiveLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ULiveLinkComponent::GetSubjectDataAtWorldTime(const FName SubjectName, const float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) {
}

void ULiveLinkComponent::GetSubjectDataAtSceneTime(const FName SubjectName, const FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) {
}

void ULiveLinkComponent::GetSubjectData(const FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle) {
}

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<FName>& SubjectNames) {
}


