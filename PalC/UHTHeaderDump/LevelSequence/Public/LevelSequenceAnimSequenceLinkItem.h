#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimInterpolationType -FallbackName=EAnimInterpolationType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
#include "LevelSequenceAnimSequenceLinkItem.generated.h"

USTRUCT(BlueprintType)
struct LEVELSEQUENCE_API FLevelSequenceAnimSequenceLinkItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGuid SkelTrackGuid;
    
    UPROPERTY(BlueprintReadWrite)
    FSoftObjectPath PathToAnimSequence;
    
    UPROPERTY(BlueprintReadWrite)
    bool bExportTransforms;
    
    UPROPERTY(BlueprintReadWrite)
    bool bExportMorphTargets;
    
    UPROPERTY(BlueprintReadWrite)
    bool bExportAttributeCurves;
    
    UPROPERTY(BlueprintReadWrite)
    bool bExportMaterialCurves;
    
    UPROPERTY(BlueprintReadWrite)
    EAnimInterpolationType Interpolation;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ERichCurveInterpMode> CurveInterpolation;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRecordInWorldSpace;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEvaluateAllSkeletalMeshComponents;
    
    FLevelSequenceAnimSequenceLinkItem();
};

