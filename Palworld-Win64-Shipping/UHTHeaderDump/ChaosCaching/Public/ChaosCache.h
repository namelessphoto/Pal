#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "CacheEventTrack.h"
#include "CacheSpawnableTemplate.h"
#include "PerParticleCacheData.h"
#include "RichCurves.h"
#include "ChaosCache.generated.h"

UCLASS()
class CHAOSCACHING_API UChaosCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float RecordedDuration;
    
    UPROPERTY(VisibleAnywhere)
    uint32 NumRecordedFrames;
    
    UPROPERTY()
    TArray<int32> TrackToParticle;
    
    UPROPERTY()
    TArray<FPerParticleCacheData> ParticleTracks;
    
    UPROPERTY()
    TMap<FName, FRichCurves> ChannelsTracks;
    
    UPROPERTY()
    TMap<FName, FRichCurve> CurveData;
    
private:
    UPROPERTY()
    TMap<FName, FCacheEventTrack> EventTracks;
    
    UPROPERTY(VisibleAnywhere)
    FCacheSpawnableTemplate Spawnable;
    
    UPROPERTY()
    FGuid AdapterGuid;
    
    UPROPERTY()
    int32 Version;
    
public:
    UChaosCache();

};

