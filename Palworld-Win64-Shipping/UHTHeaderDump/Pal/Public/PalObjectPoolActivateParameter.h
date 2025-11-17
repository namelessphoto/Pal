#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "Templates/SubclassOf.h"
#include "PalObjectPoolActivateParameter.generated.h"

class AActor;
class APawn;

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolActivateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnIfEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
    
    FPalObjectPoolActivateParameter();
};

