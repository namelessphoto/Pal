#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraBakerTextureSource.h"
#include "NiagaraBakerOutputVolumeTexture.generated.h"

UCLASS()
class NIAGARA_API UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraBakerTextureSource SourceBinding;
    
    UPROPERTY(EditAnywhere)
    uint8 bGenerateAtlas: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGenerateFrames: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bExportFrames: 1;
    
    UPROPERTY(EditAnywhere)
    FString AtlasAssetPathFormat;
    
    UPROPERTY(EditAnywhere)
    FString FramesAssetPathFormat;
    
    UPROPERTY(EditAnywhere)
    FString FramesExportPathFormat;
    
    UNiagaraBakerOutputVolumeTexture();

};

