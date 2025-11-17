#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalBuildObjectOverlapChecker.generated.h"

class AActor;
class APalBuildObject;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS()
class UPalBuildObjectOverlapChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UShapeComponent* Collision;
    
    UPROPERTY(Transient)
    APalBuildObject* Owner;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<APalBuildObject*> OverlapBuildObjects;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UObject*> OverlapOtherObjects;
    
    UPROPERTY(Transient, VisibleAnywhere)
    AActor* OverlappedActor;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> AllowOverlapCollisionPresetNames;
    
public:
    UPalBuildObjectOverlapChecker();

private:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

