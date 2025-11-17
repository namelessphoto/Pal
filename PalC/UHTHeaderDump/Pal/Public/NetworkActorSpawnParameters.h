#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "Templates/SubclassOf.h"
#include "NetworkActorSpawnParameters.generated.h"

class AActor;
class AController;

USTRUCT(BlueprintType)
struct FNetworkActorSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* NetworkOwner;
    
    UPROPERTY(BlueprintReadWrite)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator SpawnRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SpawnScale;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<AController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite)
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAlwaysRelevant;
    
    UPROPERTY(BlueprintReadWrite)
    bool bNeedAdjustToFloor;
    
    UPROPERTY(BlueprintReadWrite)
    float AdjustUpOffset;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAdjustShortRayLength;
    
    PAL_API FNetworkActorSpawnParameters();
};

