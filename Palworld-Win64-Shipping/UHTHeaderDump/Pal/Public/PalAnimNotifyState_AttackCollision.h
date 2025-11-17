#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "PalAnimNotifyState_AttackCollision.generated.h"

class AActor;
class UPalHitFilter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_AttackCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName attachBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsEnableHitStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverrideHitStopTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPalHitFilter* AttackFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bImmediateUpdateOverlaps;
    
    UPROPERTY(Instanced)
    UShapeComponent* ShapeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UShapeComponent*> ShapeComponents;
    
    UPalAnimNotifyState_AttackCollision();

private:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* MyHitComponent, AActor* HitActor, UPrimitiveComponent* HitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount) const;
    
};

