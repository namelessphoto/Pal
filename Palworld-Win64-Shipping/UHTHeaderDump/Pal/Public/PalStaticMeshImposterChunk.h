#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalOptionGraphicsSettings.h"
#include "PalStaticMeshImposterChunk.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS()
class PAL_API APalStaticMeshImposterChunk : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UHierarchicalInstancedStaticMeshComponent*> HISMComponents;
    
public:
    APalStaticMeshImposterChunk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetChunkGridSize(const int32 NewChunkGridSize);
    
private:
    UFUNCTION()
    void OnChangeGraphicsSettings(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Dev_SetChunkVisible(const bool bVisible);
    
};

