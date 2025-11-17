#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalSupplyType.h"
#include "PalSupplyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSupplyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalSupplyType SupplyType;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid SupplySpawnerGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime SupplyTime;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime SupplyLandedTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWipedOut_Pal;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWipedOut_NPC;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid SupplyMapObjectId;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGuid> DropItemGuids;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid MapLocationId;
    
    PAL_API FPalSupplyInfo();
};

