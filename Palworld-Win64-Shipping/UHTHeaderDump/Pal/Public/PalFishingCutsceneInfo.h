#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalFishingPlayerMotionType.h"
#include "EPalSizeType.h"
#include "PalFishingCutsceneCharacterInfo.h"
#include "PalFishingCutsceneInfo.generated.h"

class UAnimMontage;
class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPalFishingCutsceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UMaterialInterface*> MeshMaterials;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector MeshRelativeScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalSizeType CameraSizeType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalFishingPlayerMotionType PlayerMotionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CameraTargetOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CameraTargetDistanceOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasFishingRod;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimMontage* FishingCaughtMontage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FPalFishingCutsceneCharacterInfo CharacterInfo;
    
    PAL_API FPalFishingCutsceneInfo();
};

