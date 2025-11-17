#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EPalBodyPartsType.h"
#include "PalBodyPartsBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBodyPartsBoxComponent : public UBoxComponent {
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
    UPalBodyPartsBoxComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_BroadcastCollisionProfileName();
    
};

