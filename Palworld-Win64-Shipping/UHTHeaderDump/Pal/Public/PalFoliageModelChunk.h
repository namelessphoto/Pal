#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalFoliageInstanceRepInfoArray.h"
#include "PalFoliageModelChunk.generated.h"

UCLASS()
class PAL_API APalFoliageModelChunk : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFoliageInstanceRepInfoArray RepInfoArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ChunkGridSize)
    int32 ChunkGridSize;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 InstanceNum;
    
public:
    APalFoliageModelChunk(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_ChunkGridSize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedChunkGridSize(const int32 NewChunkGridSize);
    
};

