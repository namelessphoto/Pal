#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerRelevancyBase -FallbackName=AnimNode_AssetPlayerRelevancyBase
#include "RandomPlayerSequenceEntry.h"
#include "AnimNode_RandomPlayer.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRandomPlayerSequenceEntry> Entries;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float BlendWeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShuffleMode;
    
    FAnimNode_RandomPlayer();
};

