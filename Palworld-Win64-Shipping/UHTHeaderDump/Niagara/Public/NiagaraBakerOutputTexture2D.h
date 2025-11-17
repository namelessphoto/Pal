#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
#include "NiagaraBakerOutput.h"
#include "NiagaraBakerTextureSource.h"
#include "NiagaraBakerOutputTexture2D.generated.h"

UCLASS()
class NIAGARA_API UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput {
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
    uint8 bSetTextureAddressX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetTextureAddressY: 1;
    
    UPROPERTY(EditAnywhere)
    FIntPoint FrameSize;
    
    UPROPERTY(EditAnywhere)
    FIntPoint AtlasTextureSize;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureAddress> TextureAddressX;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureAddress> TextureAddressY;
    
    UPROPERTY(EditAnywhere)
    FString AtlasAssetPathFormat;
    
    UPROPERTY(EditAnywhere)
    FString FramesAssetPathFormat;
    
    UPROPERTY(EditAnywhere)
    FString FramesExportPathFormat;
    
    UNiagaraBakerOutputTexture2D();

};

