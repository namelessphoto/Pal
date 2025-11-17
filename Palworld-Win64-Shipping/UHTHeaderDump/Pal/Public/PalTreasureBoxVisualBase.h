#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BranchingPointNotifyPayload -FallbackName=BranchingPointNotifyPayload
#include "PalTreasureBoxVisualBase.generated.h"

class UPalSkeletalMeshComponent;

UCLASS()
class PAL_API APalTreasureBoxVisualBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UPalSkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    APalTreasureBoxVisualBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayMontageNotifyBegin_BP(FName NotifyName);
    
    UFUNCTION()
    void OnPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

