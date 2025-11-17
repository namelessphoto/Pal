#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "PalCharacterAroundInfoCollectorComponent.generated.h"

class AActor;
class APalMapObject;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterAroundInfoCollectorComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverlapDelegate, AActor*, OtherActor);
    
    UPROPERTY(BlueprintAssignable)
    FOverlapDelegate OnOverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOverlapDelegate OnOverlapEndDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> MapObjectModelIds;
    
public:
    UPalCharacterAroundInfoCollectorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSetMapObjectModel(APalMapObject* MapObject);
    
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

