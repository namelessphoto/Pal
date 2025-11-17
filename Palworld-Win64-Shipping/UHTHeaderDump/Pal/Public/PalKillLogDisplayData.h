#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalKillLogDisplayType.h"
#include "PalKillLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalKillLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalKillLogDisplayType LogType;
    
    UPROPERTY(BlueprintReadWrite)
    FString AttackerName;
    
    UPROPERTY(BlueprintReadWrite)
    FName AttackerCharacterID;
    
    UPROPERTY(BlueprintReadWrite)
    FName AttackerUniqueNPCID;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid AttackerPlayerUID;
    
    UPROPERTY(BlueprintReadWrite)
    FString KilledCharacterName;
    
    UPROPERTY(BlueprintReadWrite)
    FName KilledCharacterID;
    
    UPROPERTY(BlueprintReadWrite)
    FName KilledUniqueNPCID;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid KilledPlayerUID;
    
    PAL_API FPalKillLogDisplayData();
};

