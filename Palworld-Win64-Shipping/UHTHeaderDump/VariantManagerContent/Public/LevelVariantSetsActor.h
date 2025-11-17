#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelVariantSetsActor.generated.h"

class ULevelVariantSets;
class ULevelVariantSetsFunctionDirector;

UCLASS()
class VARIANTMANAGERCONTENT_API ALevelVariantSetsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath LevelVariantSets;
    
private:
    UPROPERTY(Transient)
    TMap<UClass*, ULevelVariantSetsFunctionDirector*> DirectorInstances;
    
public:
    ALevelVariantSetsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByName(const FString& VariantSetName, const FString& VariantName);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
    
    UFUNCTION(BlueprintCallable)
    ULevelVariantSets* GetLevelVariantSets(bool bLoad);
    
};

