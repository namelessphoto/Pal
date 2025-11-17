#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_DroppedCharacter.generated.h"

class UPalMapObjectPickableCharacterModelBase;

UCLASS()
class UPalLocationPoint_DroppedCharacter : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid MapObjectConcreteModelId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
public:
    UPalLocationPoint_DroppedCharacter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectPickableCharacterModelBase* GetMapObjectConcreteModel() const;
    
};

