#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DistortionInfo.h"
#include "DistortionPointInfo.h"
#include "DistortionTable.h"
#include "ELensDataCategory.h"
#include "ELensDataMode.h"
#include "EncodersTable.h"
#include "FocalLengthInfo.h"
#include "FocalLengthPointInfo.h"
#include "FocalLengthTable.h"
#include "ImageCenterInfo.h"
#include "ImageCenterPointInfo.h"
#include "ImageCenterTable.h"
#include "LensInfo.h"
#include "NodalOffsetPointInfo.h"
#include "NodalOffsetTable.h"
#include "NodalPointOffset.h"
#include "STMapInfo.h"
#include "STMapPointInfo.h"
#include "STMapTable.h"
#include "LensFile.generated.h"

class ULensDistortionModelHandlerBase;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class CAMERACALIBRATIONCORE_API ULensFile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLensInfo LensInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELensDataMode DataMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> UserMetadata;
    
    UPROPERTY()
    FEncodersTable EncodersTable;
    
    UPROPERTY()
    FDistortionTable DistortionTable;
    
    UPROPERTY()
    FFocalLengthTable FocalLengthTable;
    
    UPROPERTY()
    FImageCenterTable ImageCenterTable;
    
    UPROPERTY()
    FNodalOffsetTable NodalOffsetTable;
    
    UPROPERTY()
    FSTMapTable STMapTable;
    
protected:
    UPROPERTY(Transient)
    TArray<UTextureRenderTarget2D*> UndistortionDisplacementMapHolders;
    
    UPROPERTY(Transient)
    TArray<UTextureRenderTarget2D*> DistortionDisplacementMapHolders;
    
public:
    ULensFile();

    UFUNCTION(BlueprintCallable)
    void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
    
    UFUNCTION(BlueprintPure)
    bool HasSamples(ELensDataCategory InDataCategory) const;
    
    UFUNCTION(BlueprintPure)
    bool HasIrisEncoderMapping() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFocusEncoderMapping() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalPointNum(ELensDataCategory InDataCategory) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSTMapPointInfo> GetSTMapPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSTMapPoint(float InFocus, float InZoom, FSTMapInfo& OutSTMapInfo) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FNodalOffsetPointInfo> GetNodalOffsetPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNodalOffsetPoint(float InFocus, float InZoom, FNodalPointOffset& OutNodalPointOffset) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FImageCenterPointInfo> GetImageCenterPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetImageCenterPoint(float InFocus, float InZoom, FImageCenterInfo& OutImageCenterInfo) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FFocalLengthPointInfo> GetFocalLengthPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFocalLengthPoint(float InFocus, float InZoom, FFocalLengthInfo& OutFocalLengthInfo) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDistortionPointInfo> GetDistortionPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDistortionPoint(float InFocus, float InZoom, FDistortionInfo& OutDistortionInfo) const;
    
    UFUNCTION(BlueprintPure)
    float EvaluateNormalizedIris(float InNormalizedValue) const;
    
    UFUNCTION(BlueprintPure)
    float EvaluateNormalizedFocus(float InNormalizedValue) const;
    
    UFUNCTION(BlueprintPure)
    bool EvaluateNodalPointOffset(float InFocus, float InZoom, FNodalPointOffset& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintPure)
    bool EvaluateImageCenterParameters(float InFocus, float InZoom, FImageCenterInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintPure)
    bool EvaluateFocalLength(float InFocus, float InZoom, FFocalLengthInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintPure)
    bool EvaluateDistortionParameters(float InFocus, float InZoom, FDistortionInfo& OutEvaluatedValue) const;
    
    UFUNCTION(BlueprintPure)
    bool EvaluateDistortionData(float InFocus, float InZoom, FVector2D InFilmback, ULensDistortionModelHandlerBase* InLensHandler) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearData(ELensDataCategory InDataCategory);
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable)
    void AddSTMapPoint(float NewFocus, float NewZoom, const FSTMapInfo& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddNodalOffsetPoint(float NewFocus, float NewZoom, const FNodalPointOffset& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddImageCenterPoint(float NewFocus, float NewZoom, const FImageCenterInfo& NewPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddFocalLengthPoint(float NewFocus, float NewZoom, const FFocalLengthInfo& NewFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void AddDistortionPoint(float NewFocus, float NewZoom, const FDistortionInfo& NewPoint, const FFocalLengthInfo& NewFocalLength);
    
};

