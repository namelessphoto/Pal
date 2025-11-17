#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRepresentation -FallbackName=LiveLinkSubjectRepresentation
#include "LiveLinkTickDelegateDelegate.h"
#include "OnControllerMapUpdatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkComponentController.generated.h"

class ULiveLinkControllerBase;
class ULiveLinkRole;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIVELINKCOMPONENTS_API ULiveLinkComponentController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Interp, NoClear)
    TMap<TSubclassOf<ULiveLinkRole>, ULiveLinkControllerBase*> ControllerMap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUpdateInEditor;
    
    UPROPERTY(BlueprintAssignable)
    FLiveLinkTickDelegate OnLiveLinkUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerMapUpdatedDelegate OnControllerMapUpdatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEvaluateLiveLink;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUpdateInPreviewEditor;
    
    ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);
    
    UFUNCTION(BlueprintPure)
    FLiveLinkSubjectRepresentation GetSubjectRepresentation() const;
    
};

