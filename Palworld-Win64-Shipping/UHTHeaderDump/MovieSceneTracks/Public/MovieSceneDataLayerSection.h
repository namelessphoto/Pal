#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorDataLayer -FallbackName=ActorDataLayer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDataLayerRuntimeState -FallbackName=EDataLayerRuntimeState
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneDataLayerSection.generated.h"

class UDataLayerAsset;

UCLASS(MinimalAPI)
class UMovieSceneDataLayerSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FActorDataLayer> DataLayers;
    
    UPROPERTY(EditAnywhere)
    TArray<UDataLayerAsset*> DataLayerAssets;
    
    UPROPERTY(EditAnywhere)
    EDataLayerRuntimeState DesiredState;
    
    UPROPERTY(EditAnywhere)
    EDataLayerRuntimeState PrerollState;
    
    UPROPERTY(EditAnywhere)
    bool bFlushOnUnload;
    
public:
    UMovieSceneDataLayerSection();

    UFUNCTION(BlueprintCallable)
    void SetPrerollState(EDataLayerRuntimeState InPrerollState);
    
    UFUNCTION(BlueprintCallable)
    void SetFlushOnUnload(bool NewBFlushOnUnload);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredState(EDataLayerRuntimeState InDesiredState);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetDataLayers(const TArray<FActorDataLayer>& InDataLayers);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDataLayerAssets(const TArray<UDataLayerAsset*>& InDataLayerAssets);
    
    UFUNCTION(BlueprintPure)
    EDataLayerRuntimeState GetPrerollState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlushOnUnload() const;
    
    UFUNCTION(BlueprintPure)
    EDataLayerRuntimeState GetDesiredState() const;
    
private:
    UFUNCTION(BlueprintPure)
    TArray<FActorDataLayer> GetDataLayers() const;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UDataLayerAsset*> GetDataLayerAssets() const;
    

    // Fix for true pure virtual functions not being implemented
};

