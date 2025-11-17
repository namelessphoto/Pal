#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSubjectName.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkVirtualSubject.generated.h"

class ULiveLinkFrameTranslator;
class ULiveLinkRole;

UCLASS(Abstract)
class LIVELINKINTERFACE_API ULiveLinkVirtualSubject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(EditAnywhere)
    TArray<FLiveLinkSubjectName> Subjects;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<ULiveLinkFrameTranslator*> FrameTranslators;
    
    UPROPERTY(EditAnywhere)
    bool bRebroadcastSubject;
    
public:
    ULiveLinkVirtualSubject();

};

