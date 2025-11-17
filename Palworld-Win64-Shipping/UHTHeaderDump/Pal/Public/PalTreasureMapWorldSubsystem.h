#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalTreasureMapPointData.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalTreasureMapWorldSubsystem.generated.h"

class APalTreasureMapInteractivePoint;

UCLASS()
class PAL_API UPalTreasureMapWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTreasureMapPointDataDelegate, const FGuid&, PointId);
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalTreasureMapPointData> TreasureMapPointDataMap;
    
    UPROPERTY(EditDefaultsOnly)
    float TreasureMapInteractivePointZ;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalTreasureMapInteractivePoint> TreasureMapInteractivePointClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FPalDataTableRowName_FieldLotteryNameData> LotteryNameMapByRarity;
    
public:
    UPalTreasureMapWorldSubsystem();

private:
    UFUNCTION()
    void OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
    UFUNCTION()
    void OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
};

