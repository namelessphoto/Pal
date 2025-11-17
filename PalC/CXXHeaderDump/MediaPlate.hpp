#ifndef UE4SS_SDK_MediaPlate_HPP
#define UE4SS_SDK_MediaPlate_HPP

class AMediaPlate : public AActor
{
    class UMediaPlateComponent* MediaPlateComponent;
    class UStaticMeshComponent* StaticMeshComponent;

};

class UMediaPlateAssetUserData : public UAssetUserData
{
};

class UMediaPlateComponent : public UActorComponent
{
    bool bPlayOnOpen;
    bool bAutoPlay;
    bool bEnableAudio;
    float StartTime;
    bool bIsAspectRatioAuto;
    class UMediaSoundComponent* SoundComponent;
    class UStaticMeshComponent* StaticMeshComponent;
    TArray<class UStaticMeshComponent*> Letterboxes;
    class UMediaPlaylist* MediaPlaylist;
    int32 PlaylistIndex;
    FMediaSourceCacheSettings CacheSettings;
    bool bIsMediaPlatePlaying;
    bool bPlayOnlyWhenVisible;
    bool bLoop;
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;
    float MipMapBias;
    float LetterboxAspectRatio;
    FVector2D MeshRange;
    class UMediaTexture* MediaTexture;
    class UMediaPlayer* MediaPlayer;

    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    void SetMeshRange(FVector2D InMeshRange);
    void SetLoop(bool bInLoop);
    void SetLetterboxAspectRatio(float AspectRatio);
    bool Seek(const FTimespan& Time);
    bool Rewind();
    void Play();
    void Pause();
    void Open();
    void OnMediaOpened(FString DeviceUrl);
    void OnMediaEnd();
    bool IsMediaPlatePlaying();
    FVector2D GetMeshRange();
    class UMediaTexture* GetMediaTexture();
    class UMediaPlayer* GetMediaPlayer();
    bool GetLoop();
    float GetLetterboxAspectRatio();
    void Close();
};

#endif
