#pragma once
#include "CoreMinimal.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_Respawn.generated.h"

UCLASS()
class PAL_API UPalLocationPoint_Respawn : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FName RespawnPointID;
    
    UPalLocationPoint_Respawn();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

