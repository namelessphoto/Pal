#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_AddCheats.generated.h"

class UCheatManagerExtension;

UCLASS(EditInlineNew, MinimalAPI)
class UGameFeatureAction_AddCheats : public UGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UCheatManagerExtension>> CheatManagers;
    
    UPROPERTY(EditAnywhere)
    bool bLoadCheatManagersAsync;
    
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UCheatManagerExtension>> SpawnedCheatManagers;
    
public:
    UGameFeatureAction_AddCheats();

};

