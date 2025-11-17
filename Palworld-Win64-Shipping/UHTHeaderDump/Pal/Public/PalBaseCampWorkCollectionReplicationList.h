#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFastBaseCampWorkCollectionRepInfoArray.h"
#include "PalBaseCampWorkCollectionReplicationList.generated.h"

class UPalBaseCampWorkCollectionReplicationList;

UCLASS()
class PAL_API UPalBaseCampWorkCollectionReplicationList : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampWorkCollectionReplicationList*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateWorkListDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RepInfoArray)
    FPalFastBaseCampWorkCollectionRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampWorkCollectionReplicationList();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_RepInfoArray();
    
};

