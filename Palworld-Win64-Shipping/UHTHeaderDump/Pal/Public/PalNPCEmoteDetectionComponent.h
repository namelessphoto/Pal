#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ERequestEmoteType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalNPCEmoteDetectionComponent.generated.h"

class UPalActionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNPCEmoteDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGuid CompletedFlagId;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 EmoteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ERequestEmoteType RequestEmoteType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 RequestEmoteIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_FieldLotteryNameData FieldName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool LoopEmote;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UPalActionBase>> Emotes;
    
    UPalNPCEmoteDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocalPlayerEmoteAct();
    
    UFUNCTION(BlueprintPure)
    bool GetLocalPlayerRewardAble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDetector();
    
};

