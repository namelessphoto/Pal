#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequenceTickManagerWidgetData.h"
#include "UMGSequenceTickManager.generated.h"

class UMovieSceneEntitySystemLinker;
class UUserWidget;

UCLASS()
class UMG_API UUMGSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UUserWidget>, FSequenceTickManagerWidgetData> WeakUserWidgetData;
    
    UPROPERTY(Transient)
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UUMGSequenceTickManager();

};

