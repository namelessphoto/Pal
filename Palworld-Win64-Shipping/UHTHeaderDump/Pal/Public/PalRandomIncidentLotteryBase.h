#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalRandomIncidentSpawnIncidentParameter.h"
#include "PalRandomIncidentLotteryBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRandomIncidentLotteryBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float LotteryRate;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalRandomIncidentSpawnIncidentParameter> LotteryParameters;
    
public:
    UPalRandomIncidentLotteryBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LotteryIncident(FPalRandomIncidentSpawnIncidentParameter& OutResult);
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetLotteryRate() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetLotteryParameters(TArray<FPalRandomIncidentSpawnIncidentParameter>& OutParam) const;
    
};

