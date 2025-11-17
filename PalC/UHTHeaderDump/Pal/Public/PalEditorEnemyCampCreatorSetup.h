#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEditorEnemyCampCreatorSetup.generated.h"

class UPalMapObjectBlueprintDataAsset;

UCLASS()
class PAL_API APalEditorEnemyCampCreatorSetup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<FString, FString> BuildObjectIconRowNameReplaceMap;
    
    UPROPERTY(EditDefaultsOnly)
    FName EnemyCampBlueprintDataDirectoryPath;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<TSoftObjectPtr<UPalMapObjectBlueprintDataAsset>> EnemyCampBlueprintDataAssetArray;
    
public:
    APalEditorEnemyCampCreatorSetup(const FObjectInitializer& ObjectInitializer);

};

