#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeB.h"
#include "EPalEnergyType.h"
#include "PalBuildObjectData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MapObjectId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBuildObjectTypeA TypeA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RedialIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBuildObjectTypeB TypeB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BuildCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RequiredBuildWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AssetValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalEnergyType RequiredEnergyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ConsumeEnergySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material1_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material1_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material2_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material2_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material3_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material3_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material4_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material4_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BlueprintItemID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideDescMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInstallAtReticle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InstallNeighborThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsInstallOnlyOnBase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsInstallOnlyInDoor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsInstallOnlyHubAround;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InstallMaxNumInBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInstallableNoObstacleFromCamera;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BuildExpRate;
    
    PAL_API FPalBuildObjectData();
};

