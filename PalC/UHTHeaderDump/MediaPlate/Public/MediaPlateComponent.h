#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=EMediaTextureVisibleMipsTiles -FallbackName=EMediaTextureVisibleMipsTiles
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaPlayerProxyInterface -FallbackName=MediaPlayerProxyInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSourceCacheSettings -FallbackName=MediaSourceCacheSettings
#include "MediaPlateComponent.generated.h"

class UMediaPlayer;
class UMediaPlaylist;
class UMediaSoundComponent;
class UMediaTexture;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAPLATE_API UMediaPlateComponent : public UActorComponent, public IMediaPlayerProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayOnOpen;
    
    UPROPERTY(EditAnywhere)
    bool bAutoPlay;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsAspectRatioAuto;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    TArray<UStaticMeshComponent*> Letterboxes;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMediaPlaylist* MediaPlaylist;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PlaylistIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FMediaSourceCacheSettings CacheSettings;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool bIsMediaPlatePlaying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MipMapBias;
    
    UPROPERTY()
    float LetterboxAspectRatio;
    
    UPROPERTY()
    FVector2D MeshRange;
    
    UPROPERTY(Instanced)
    UMediaTexture* MediaTexture;
    
    UPROPERTY(Instanced)
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaPlateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshRange(FVector2D InMeshRange);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetLetterboxAspectRatio(float AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
private:
    UFUNCTION()
    void OnMediaOpened(const FString& DeviceUrl);
    
    UFUNCTION()
    void OnMediaEnd();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMediaPlatePlaying() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMeshRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMediaTexture* GetMediaTexture();
    
    UFUNCTION(BlueprintCallable)
    UMediaPlayer* GetMediaPlayer();
    
    UFUNCTION(BlueprintPure)
    bool GetLoop();
    
    UFUNCTION(BlueprintCallable)
    float GetLetterboxAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    

    // Fix for true pure virtual functions not being implemented
};

