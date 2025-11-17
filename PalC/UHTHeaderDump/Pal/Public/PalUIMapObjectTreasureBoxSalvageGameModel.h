#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIMapObjectTreasureBoxSalvageGameModel.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalUIMapObjectTreasureBoxSalvageGameModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnResultDelegate, const bool, bSuccess);
    
private:
    UPROPERTY()
    float GaugeStart;
    
    UPROPERTY()
    float GaugeEnd;
    
    UPROPERTY()
    float GaugeRange;
    
    UPROPERTY()
    float CursorSpeed;
    
    UPROPERTY()
    float GaugeSize;
    
public:
    UPalUIMapObjectTreasureBoxSalvageGameModel();

    UFUNCTION(BlueprintCallable)
    void SetGaugeSize(const float Size);
    
    UFUNCTION(BlueprintCallable)
    void SendResult(const bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelSalvageAction();
    
    UFUNCTION(BlueprintPure)
    float GetCursorSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void CalcGaugeRandomRange(float& Start, float& End);
    
};

