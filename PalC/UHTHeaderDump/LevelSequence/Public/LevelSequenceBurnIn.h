#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LevelSequencePlayerSnapshot.h"
#include "Templates/SubclassOf.h"
#include "LevelSequenceBurnIn.generated.h"

class ALevelSequenceActor;
class ULevelSequenceBurnInInitSettings;
class UObject;

UCLASS(EditInlineNew)
class LEVELSEQUENCE_API ULevelSequenceBurnIn : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FLevelSequencePlayerSnapshot FrameInformation;
    
    UPROPERTY(BlueprintReadOnly)
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    ULevelSequenceBurnIn();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSettings(UObject* InSettings);
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass() const;
    
};

