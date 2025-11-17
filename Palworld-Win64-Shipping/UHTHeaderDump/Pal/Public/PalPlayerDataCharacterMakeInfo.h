#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PalPlayerSkinInfo.h"
#include "PalPlayerDataCharacterMakeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataCharacterMakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BodyMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName HeadMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName HairMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName EquipmentBodyMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName EquipmentHeadMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPalPlayerSkinInfo OverrideEquipmentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool DisableHeadDressingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool DisableBodyDressingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool DisableGliderDressingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ArmVolume;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TorsoVolume;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LegVolume;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor BrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor BodyColor;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor BodySubsurfaceColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor EyeColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName EyeMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPalPlayerSkinInfo SkinInfo;
    
    PAL_API FPalPlayerDataCharacterMakeInfo();
};

