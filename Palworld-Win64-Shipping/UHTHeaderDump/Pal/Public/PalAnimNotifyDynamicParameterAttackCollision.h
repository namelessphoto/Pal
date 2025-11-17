#pragma once
#include "CoreMinimal.h"
#include "PalAnimNotifyDynamicParameterBase.h"
#include "PalAnimNotifyDynamicParameterAttackCollision.generated.h"

class AActor;
class UPalHitFilter;
class UShapeComponent;
class USkeletalMeshComponent;

UCLASS()
class UPalAnimNotifyDynamicParameterAttackCollision : public UPalAnimNotifyDynamicParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPalHitFilter* AttackFilter;
    
    UPROPERTY(Instanced, Transient)
    TArray<UShapeComponent*> TransientShapeComponents;
    
    UPROPERTY(Transient)
    float HitStopCount;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* MyMesh;
    
    UPROPERTY(Transient)
    AActor* MyActor;
    
    UPalAnimNotifyDynamicParameterAttackCollision();

};

