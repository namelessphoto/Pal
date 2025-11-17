#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectBaseCampWorkerDirectorModel.generated.h"

class UPalMapObjectBaseCampWorkerDirectorModel;

UCLASS()
class PAL_API UPalMapObjectBaseCampWorkerDirectorModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectBaseCampWorkerDirectorModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnNotifiedChangeBaseCampBattleTypeDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BaseCampBattleTypeForClientRead)
    EPalBaseCampWorkerDirectionBattleType BaseCampBattleTypeForClientRead;
    
public:
    UPalMapObjectBaseCampWorkerDirectorModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestUpdateBaseCampBattleType_ServerInternal(const int32 RequestPlayerId, const int32 BattleTypeInt);
    
protected:
    UFUNCTION()
    void OnRep_BaseCampBattleTypeForClientRead();
    
private:
    UFUNCTION()
    void NotifyChangeBaseCampBattleType_ClientInternal();
    
};

