#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERaMaterialName.h"
#include "ResonanceAudioReverbPluginSettings.generated.h"

USTRUCT(BlueprintType)
struct FResonanceAudioReverbPluginSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRoomEffects;
    
    UPROPERTY(EditAnywhere)
    bool bGetTransformFromAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RoomPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat RoomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RoomDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName LeftWallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName RightWallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName FloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName CeilingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName FrontWallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaMaterialName BackWallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReflectionScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbTimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbBrightness;
    
    RESONANCEAUDIO_API FResonanceAudioReverbPluginSettings();
};

