#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalWorldPartitionLoadingRangeVolume.generated.h"

UCLASS()
class APalWorldPartitionLoadingRangeVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<int32, float> LoadingRangeMap;
    
    APalWorldPartitionLoadingRangeVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOverrideLoadingRange(bool Enable);
    
};

