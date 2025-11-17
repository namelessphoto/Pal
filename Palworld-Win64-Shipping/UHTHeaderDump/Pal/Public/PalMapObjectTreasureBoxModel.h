#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalActionType.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "EPalMapObjectTreasureSpecialType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectTreasureBoxModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectTreasureBoxModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampAssignableObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalMapObjectTreasureGradeType TreasureGradeType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalMapObjectTreasureSpecialType TreasureSpecialType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector DropItemLocalLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bOpened;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float LongHoldInteractDuration;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalActionType InteractPlayerActionType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIsLockRiding;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIsEnemyCampGoal;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SalvageGameUIWidgetId;
    
public:
    UPalMapObjectTreasureBoxModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestPicking_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestOpen_ServerInternal(const int32 RequestPlayerId, bool IgnoreOpenItem);
    
    UFUNCTION()
    void ReceiveOpenSuccess_ClientInternal(const FPalNetArchive& Archive);
    
    UFUNCTION()
    void ReceiveOpenFailed_ClientInternal(const FPalNetArchive& Archive);
    
    UFUNCTION()
    void OpenPickingGame_ClientInternal();
    
    UFUNCTION()
    void OnReceiveSalvageResult(const bool bResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenElementalLock();
    
private:
    UFUNCTION()
    void OnEndPickingGame(bool IsSuccess);
    
    UFUNCTION()
    void OnChangeElementalLock_ServerInternal(bool bIsLocked);
    
    UFUNCTION()
    void NotifyPickingGameResult_ServerInternal(const int32 RequestPlayerId, bool IsSuccess);
    
    UFUNCTION()
    void NotifyFinishGameToServer(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintPure)
    EPalMapObjectTreasureGradeType GetTreasureGradeType() const;
    
private:
    UFUNCTION()
    void Debug_ReceiveObtainInfo_ClientInternal(const FPalNetArchive& Archive);
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<FPalItemAndNum> CreateItemInfo() const;
    

    // Fix for true pure virtual functions not being implemented
};

