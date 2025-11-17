#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalBuildObject.h"
#include "PalBuildObjectCharacterTeamMissionCharacterLoadProgress.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceStartCharacterData.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceWaitData.h"
#include "PalBuildObjectCharacterTeamMission.generated.h"

class UPalCharacterVisualSkeletalMeshComponent;
class USplineComponent;

UCLASS()
class PAL_API APalBuildObjectCharacterTeamMission : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float CharacterMoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HeadRunnerInSplineIntervalRange;
    
    UPROPERTY()
    TArray<FPalBuildObjectCharacterTeamMissionPerformanceWaitData> WaitPerformanceDataList;
    
    UPROPERTY()
    TMap<USplineComponent*, FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray> InProgressPerformanceDataArrayBySplineMap;
    
    UPROPERTY()
    float ProgressTimeInPerformance;
    
    UPROPERTY()
    TMap<FName, FPalBuildObjectCharacterTeamMissionCharacterLoadProgress> CharacterLoadProgressMap;
    
public:
    APalBuildObjectCharacterTeamMission(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateAndInitTransformNewVisualEvent(UPalCharacterVisualSkeletalMeshComponent* NewVisualComponent);
    
private:
    UFUNCTION()
    void OnChangedState_ServerInternal(const EPalMapObjectCharacterTeamMissionState LastMissionState, const EPalMapObjectCharacterTeamMissionState CurrentMissionState);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastStopMissionPerformance_Multicast();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastStartMissionPerformance_Multicast(const TArray<FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData>& StartCharacterDataList);
    
};

