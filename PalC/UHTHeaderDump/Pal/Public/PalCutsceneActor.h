#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "Templates/SubclassOf.h"
#include "PalCutsceneActor.generated.h"

class UPalCutsceneBindParameter;
class UPalUserWidgetOverlayUI;

UCLASS()
class APalCutsceneActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpeningFadeInDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpeningFadeInTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanSkip;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMuteSE;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> CustomUIClass;
    
    APalCutsceneActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTransformOrigin(const FTransform& TransformOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBindParameter(UPalCutsceneBindParameter* BindParameter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrePlayCutscene();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishedCutscene();
    
};

