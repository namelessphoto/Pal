#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEditorDungeonAutoEnter.generated.h"

class UDataLayerAsset;

UCLASS()
class PAL_API APalEditorDungeonAutoEnter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    UDataLayerAsset* TargetDataLayer;
    
    UPROPERTY(EditAnywhere)
    float WaitSecondsBeforeEnterRequest;
    
public:
    APalEditorDungeonAutoEnter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnCompleteLoadInitWorldPartition();
    
};

