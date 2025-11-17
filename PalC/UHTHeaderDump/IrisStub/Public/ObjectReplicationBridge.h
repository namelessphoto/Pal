#pragma once
#include "CoreMinimal.h"
#include "ReplicationBridge.h"
#include "ObjectReplicationBridge.generated.h"

UCLASS(MinimalAPI, NonTransient)
class UObjectReplicationBridge : public UReplicationBridge {
    GENERATED_BODY()
public:
    UObjectReplicationBridge();

};

