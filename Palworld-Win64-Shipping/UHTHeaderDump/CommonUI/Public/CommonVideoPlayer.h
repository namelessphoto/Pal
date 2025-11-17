#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "CommonVideoPlayer.generated.h"

class UMaterial;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;

UCLASS()
class COMMONUI_API UCommonVideoPlayer : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMediaSource* Video;
    
    UPROPERTY(Transient)
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(Transient)
    UMediaTexture* MediaTexture;
    
    UPROPERTY(Transient)
    UMaterial* VideoMaterial;
    
    UPROPERTY(Instanced, Transient)
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(Transient)
    FSlateBrush VideoBrush;
    
public:
    UCommonVideoPlayer();

};

