#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EVolumeCacheType.h"
#include "VolumeCache.generated.h"

UCLASS()
class NIAGARA_API UVolumeCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FilePath;
    
    UPROPERTY(EditAnywhere)
    EVolumeCacheType CacheType;
    
    UPROPERTY(EditAnywhere)
    FIntVector Resolution;
    
    UPROPERTY(EditAnywhere)
    int32 FrameRangeStart;
    
    UPROPERTY(EditAnywhere)
    int32 FrameRangeEnd;
    
    UVolumeCache();

};

