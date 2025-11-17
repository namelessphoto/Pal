#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalUIAimReticleMapObjectAssignableData.h"
#include "PalUIAimReticleMapObjectThrowableData.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleWindowBase.generated.h"

class AActor;
class UPalCharacterParameterComponent;

UCLASS(EditInlineNew)
class PAL_API UPalUIAimReticleWindowBase : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> LastWeakHitActor;
    
public:
    UPalUIAimReticleWindowBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TickDisplayOutline(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsThrowableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectThrowableData& outThrowableData);
    
    UFUNCTION(BlueprintCallable)
    void IsAssignableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectAssignableData& outAssignableData);
    
};

