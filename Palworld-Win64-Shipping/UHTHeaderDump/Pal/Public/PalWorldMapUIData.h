#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "PalWorldMapUIDataTableRow.h"
#include "PalWorldMapUIData.generated.h"

class UDataTable;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class PAL_API UPalWorldMapUIData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnlockedMapDelegate, const FName&, unlockedRegionId, const int32, PlayerId);
    
    UPROPERTY(BlueprintAssignable)
    FUnlockedMapDelegate OnUnlockedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* MaskRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* MaskTexture;
    
    UPROPERTY()
    TArray<uint8> CachedTextureRawData;
    
private:
    UPROPERTY()
    TMap<FName, bool> unlockedRegionMap;
    
    UPROPERTY()
    UDataTable* worldMapDataTable;
    
    UPROPERTY()
    FName currentPlayMapName;
    
public:
    UPalWorldMapUIData();

    UFUNCTION(BlueprintCallable)
    bool UnlockMap(const FName& regionId, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void UnlockByScroll(const float& Diameter, const FVector2f& ActorLocation);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockedMap(const FName& regionId);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedMapData(TMap<FName, bool>& outMapData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentPlayMapUIData(FPalWorldMapUIDataTableRow& OutData);
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentPlayMapName();
    
};

