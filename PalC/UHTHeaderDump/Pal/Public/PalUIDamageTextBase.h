#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "EPalDamageTextSeq.h"
#include "PalUserWidget.h"
#include "PalUIDamageTextBase.generated.h"

class UPalUIDamageTextBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIDamageTextBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestCloseDelegate, UPalUIDamageTextBase*, SelfWidget);
    
    UPROPERTY(BlueprintAssignable)
    FRequestCloseDelegate OnRequestCloseDelegate;
    
private:
    UPROPERTY()
    float DisplayTime;
    
    UPROPERTY()
    float displayTimer;
    
    UPROPERTY()
    EPalDamageTextSeq nowSeq;
    
    UPROPERTY()
    FVector TargetLocation;
    
public:
    UPalUIDamageTextBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosition(const FVector& targetWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void StartDisplay(float inDisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWorldLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageColor(const FSlateColor& inColor);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimer();
    
    UFUNCTION()
    void RequestClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClose();
    
};

