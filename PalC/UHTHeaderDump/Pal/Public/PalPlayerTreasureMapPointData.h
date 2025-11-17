#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFastPlayerTreasureMapPointRepInfoArray.h"
#include "PalPlayerRecordDataFoundTreasureMapPoint.h"
#include "PalPlayerTreasureMapPointData.generated.h"

class UPalPlayerTreasureMapPointData;

UCLASS()
class PAL_API UPalPlayerTreasureMapPointData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndPointIdMulticastDelegate, const UPalPlayerTreasureMapPointData*, PointData, const FGuid&, PointId);
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastPlayerTreasureMapPointRepInfoArray TreasureMapPointRepInfoArray;
    
public:
    UPalPlayerTreasureMapPointData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRemovedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION()
    void OnRegisterTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION()
    void OnMovedTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION()
    void OnAddedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId, const FPalPlayerRecordDataFoundTreasureMapPoint& PointData);
    
};

