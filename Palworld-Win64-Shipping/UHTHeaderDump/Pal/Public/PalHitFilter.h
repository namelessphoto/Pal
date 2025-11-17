#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Templates/SubclassOf.h"
#include "PalHitFilter.generated.h"

class AActor;
class UPalHitLocationCalculator;
class UPrimitiveComponent;

UCLASS(BlueprintType, EditInlineNew)
class UPalHitFilter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOverlapEndDelegate, UPrimitiveComponent*, MyHitComponent, AActor*, OtherHitActor, UPrimitiveComponent*, OtherHitComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHitDelegate, UPrimitiveComponent*, MyHitComponent, AActor*, OtherHitActor, UPrimitiveComponent*, OtherHitComponent, const TArray<int32>&, FoliageIndex, FVector, HitLocation, int32, HitCount);
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MaxHitNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalHitLocationCalculator> HitLocationCalculator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsIntersectionCollision;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bFindNearestCollisionCombination;
    
private:
    UPROPERTY(Transient)
    int32 IntersectionNum;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnHitDelegate OnHitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOverlapEndDelegate OnOverlapEndDelegate;
    
    UPalHitFilter();

    UFUNCTION(BlueprintCallable)
    void UnbindPrimitiveComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetIntersectionNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAttacker(AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void ResetFilter();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void BindPrimitiveComponent(UPrimitiveComponent* Component);
    
};

