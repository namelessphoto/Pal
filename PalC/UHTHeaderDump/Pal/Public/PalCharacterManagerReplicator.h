#pragma once
#include "CoreMinimal.h"
#include "CharacterParameterRepInfo.h"
#include "FastCharacterParameterRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalCharacterManagerReplicator.generated.h"

UCLASS(MinimalAPI)
class UPalCharacterManagerReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnPep_CharacterParameterInfos)
    FFastCharacterParameterRepInfoArray CharacterParameterInfosFast;
    
public:
    UPalCharacterManagerReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnPreReplicatedRemoveItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION()
    void OnPostReplicatedChangeItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION()
    void OnPostReplicatedAddItem(const FCharacterParameterRepInfo& Item);
    
    UFUNCTION()
    void OnPep_CharacterParameterInfos();
    
};

