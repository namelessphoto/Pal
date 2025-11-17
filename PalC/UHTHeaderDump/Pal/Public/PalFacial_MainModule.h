#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalFacialEyeType.h"
#include "EPalFacialMouthType.h"
#include "PalMorphSetting.h"
#include "PalFacial_MainModule.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType)
class PAL_API UPalFacial_MainModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 EyeMaterialIndex;
    
    UPROPERTY(Transient)
    int32 MouthMaterialIndex;
    
    UPROPERTY(Transient)
    int32 BrowMaterialIndex;
    
    UPROPERTY(Transient)
    TMap<EPalFacialEyeType, FPalMorphSetting> MorphSetting_Eye;
    
    UPROPERTY(Transient)
    TMap<EPalFacialMouthType, FPalMorphSetting> MorphSetting_Mouth;
    
    UPROPERTY(Transient)
    TMap<EPalFacialEyeType, float> BlendShape_TypeEyeWeight;
    
    UPROPERTY(Transient)
    TMap<EPalFacialMouthType, float> BlendShape_TypeMouthWeight;
    
    UPROPERTY(Transient)
    TMap<FName, float> BlendShape_EyeWeight;
    
    UPROPERTY(Transient)
    TMap<FName, float> BlendShape_MouthWeight;
    
public:
    UPalFacial_MainModule();

    UFUNCTION(BlueprintCallable)
    void Setup_FacialModule(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

