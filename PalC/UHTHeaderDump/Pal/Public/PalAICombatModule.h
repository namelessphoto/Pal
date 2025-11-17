#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAICombatModule.generated.h"

class AActor;

UCLASS(Abstract, BlueprintType)
class PAL_API UPalAICombatModule : public UObject {
    GENERATED_BODY()
public:
    UPalAICombatModule();

    UFUNCTION(BlueprintCallable)
    void UpdateBattleState();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable_NavMesh_ForActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool IsReachable_NavMesh(FVector TargetPos);
    
    UFUNCTION(BlueprintPure)
    bool IsBattleMode();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetActor();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllTargetActors();
    
    UFUNCTION(BlueprintCallable)
    bool AIMoveToTargetActor(AActor* Target);
    
};

