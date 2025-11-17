#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalOtomoSpawnCollisionChecker.generated.h"

class AActor;
class APawn;

UCLASS(BlueprintType)
class PAL_API UPalOtomoSpawnCollisionChecker : public UObject {
    GENERATED_BODY()
public:
    UPalOtomoSpawnCollisionChecker();

    UFUNCTION(BlueprintCallable)
    FTransform GetTransform_WhenSpawnPalNearTrainer(AActor* Trainer);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocation_WhenSpawnPalSphgereThrow(FHitResult Hit, APawn* CurrentSelectPalActor);
    
};

