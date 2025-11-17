#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "EPalBodyPartsType.h"
#include "PalBodyPartsCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBodyPartsCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalBodyPartsType BodyPartsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BodyPartsFlags;
    
private:
    UPROPERTY(VisibleInstanceOnly)
    FName DefaultCollisionProfileName;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_BroadcastCollisionProfileName)
    FName BroadcastCollisionProfileName;
    
public:
    UPalBodyPartsCapsuleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_BroadcastCollisionProfileName();
    
};

