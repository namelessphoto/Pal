#pragma once
#include "CoreMinimal.h"
#include "PalObjectPoolActivateParameter.h"
#include "PalObjectPoolContainer.h"
#include "PalObjectPoolKey.h"
#include "PalWorldSubsystem.h"
#include "PalObjectPoolManager.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType)
class PAL_API UPalObjectPoolManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FPalObjectPoolKey, FPalObjectPoolContainer> NoReplicateObjectPoolMap;
    
    UPROPERTY(Transient)
    TMap<AActor*, FPalObjectPoolKey> NoReplicateObjectUsingMap;
    
    UPROPERTY(Transient)
    TMap<FPalObjectPoolKey, FPalObjectPoolContainer> ReplicateObjectPoolMap;
    
    UPROPERTY(Transient)
    TMap<AActor*, FPalObjectPoolKey> ReplicateObjectUsingMap;
    
    UPalObjectPoolManager();

    UFUNCTION(BlueprintCallable)
    void RegisterToPool(AActor* InActor, FPalObjectPoolKey InKey);
    
    UFUNCTION(BlueprintCallable)
    static void General_DeactivateActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void General_ActivateActor(AActor* InActor);
    
    UFUNCTION()
    void DestroyedActor(AActor* NewDestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateToPool(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearPool(FPalObjectPoolKey InKey, bool bDestroyUsingActor);
    
    UFUNCTION(BlueprintCallable)
    AActor* ActivateFromPool(FPalObjectPoolActivateParameter InParameter);
    
};

