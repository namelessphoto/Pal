#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectSettings.generated.h"

class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFramePreProcessor;
class ULiveLinkFrameTranslator;
class ULiveLinkRole;

UCLASS()
class LIVELINKINTERFACE_API ULiveLinkSubjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<ULiveLinkFramePreProcessor*> PreProcessors;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<ULiveLinkFrameTranslator*> Translators;
    
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(VisibleAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bRebroadcastSubject;
    
    ULiveLinkSubjectSettings();

};

