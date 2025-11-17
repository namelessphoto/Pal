#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalSkinType.h"
#include "PalSkinDataBase.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType)
class UPalSkinDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalSkinType SkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHairAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetActorClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetPalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoGetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlatformItemID_Steam;
    
    UPalSkinDataBase();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FName GetTargetPalName(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetLocalizedSkinName(const UObject* WorldContextObject) const;
    
};

