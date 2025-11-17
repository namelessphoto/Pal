#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Templates/SubclassOf.h"
#include "PalNPCSpawnInfo.generated.h"

class APalAIController;
class UPalSquad;

USTRUCT(BlueprintType)
struct FPalNPCSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<APalAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite)
    UPalSquad* Squad;
    
    PAL_API FPalNPCSpawnInfo();
};

