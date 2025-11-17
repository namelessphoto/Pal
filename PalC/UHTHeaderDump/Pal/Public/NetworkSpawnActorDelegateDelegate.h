#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NetworkSpawnActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FNetworkSpawnActorDelegate, FGuid, SpawnGUID, AActor*, SpawnActor);

