#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPickingGameDifficultyType.h"
#include "PalPickingGameSettingData.h"
#include "PalPickingGameProcessor.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPickingGameProcessor : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePickingToolPosition, float, ToolPosition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateKeyPosition, float, KeyPositon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSuccessPicking);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStopTurningKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartGame, const FPalPickingGameSettingData, NewSettingData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFailPicking);
    
    UPROPERTY(BlueprintAssignable)
    FStartGame OnStartGame;
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePickingToolPosition OnUpdatePickingToolPosition;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateKeyPosition OnUpdateKeyPosition;
    
    UPROPERTY(BlueprintAssignable)
    FStopTurningKey OnStopTurningKey;
    
    UPROPERTY(BlueprintAssignable)
    FFailPicking OnFailPicking;
    
    UPROPERTY(BlueprintAssignable)
    FSuccessPicking OnSuccessPicking;
    
private:
    UPROPERTY()
    FPalPickingGameSettingData OriginalSettingData;
    
    UPROPERTY()
    FPalPickingGameSettingData ModifiedSettingData;
    
    UPROPERTY()
    EPalPickingGameDifficultyType FixedDifficultyType;
    
public:
    UPalPickingGameProcessor();

    UFUNCTION(BlueprintCallable)
    void StartNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetupByDifficultyType(EPalPickingGameDifficultyType DifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetPickingToolPosition(float NewPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetKeyPosition(float NewPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoKeyReturn(bool IsAutoReturn);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintPure)
    void GetUnlockableRange(float& OutMin, float& OutMax);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, FPalPickingGameSettingData& OutSettingData);
    
public:
    UFUNCTION(BlueprintPure)
    EPalPickingGameDifficultyType GetDifficultyType();
    
    UFUNCTION(BlueprintCallable)
    void AddPickingToolPosition(float AddPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddKeyPosition(float AddPosition);
    
};

