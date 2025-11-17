#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticItemIdAndNum.h"
#include "PalUIMapObjectFishPondCharacterInfo.h"
#include "PalUIMapObjectFishPondTargetInfo.h"
#include "PalUIMapObjectFishPondModel.generated.h"

class UPalUIMapObjectFishPondModel;

UCLASS(BlueprintType)
class PAL_API UPalUIMapObjectFishPondModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectFishPondModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateSelectedLotteryNameDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateProductNumDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName SelectedLotteryName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 ProductNum;
    
public:
    UPalUIMapObjectFishPondModel();

    UFUNCTION(BlueprintCallable)
    void SetProductNum(const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SelectLotteryName(const FName LotteryName);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartProduce();
    
    UFUNCTION(BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetLotteryNames(TArray<FName>& OutTargetLotteryNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetInfos(TArray<FPalUIMapObjectFishPondTargetInfo>& OutInfos) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSelectedLotteryName() const;
    
    UFUNCTION(BlueprintPure)
    void GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos);
    
    UFUNCTION(BlueprintPure)
    int32 GetProductNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetCaptureTargetCharacterInfos(TArray<FPalUIMapObjectFishPondCharacterInfo>& OutArray) const;
    
    UFUNCTION(BlueprintPure)
    bool CanRequestStartProduce() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalcLocalPlayerMaxProductableNum();
    
};

