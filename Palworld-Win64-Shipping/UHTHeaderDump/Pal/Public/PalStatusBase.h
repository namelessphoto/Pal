#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalStatusID.h"
#include "StatusDynamicParameter.h"
#include "PalStatusBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalStatusBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsEndStatus;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FStatusDynamicParameter DynamicParameter;
    
    UPROPERTY(Replicated)
    EPalStatusID statusID;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsNerverEnd;
    
public:
    UPalStatusBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintNativeEvent)
    void TickStatus(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHalfDurationTimer();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnEndStatus();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBreakStatus();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginStatus();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginSomeStatus();
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEndStatus() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
};

