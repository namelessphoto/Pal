#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalSkinType.h"
#include "OnApplySkinDelegate.h"
#include "PalSkinManager.generated.h"

class APalCharacter;
class UPalSkinDataBase;
class UPalStaticSkinDataAsset;

UCLASS(Abstract, BlueprintType)
class PAL_API UPalSkinManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPalStaticSkinDataAsset* SkinDataAsset;
    
public:
    UPalSkinManager();

    UFUNCTION(BlueprintPure)
    bool HasSkin(FGuid InPlayerUId, const FName& CheckSkinName);
    
    UFUNCTION(BlueprintPure)
    FName GetTargetPalName(const FName& SkinName);
    
    UFUNCTION(BlueprintPure)
    bool GetPalCharacterClass(FName SkinName, bool bIsBoss, TSoftClassPtr<APalCharacter>& OutCharacterClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinListFromType(FGuid InPlayerUId, EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetHaveSkinList(FGuid InPlayerUId);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetAllSkinListFromType(EPalSkinType InType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPalSkinDataBase*> GetAllSkinList();
    
    UFUNCTION(BlueprintCallable)
    void ApplySkin(FGuid InPlayerUId, FName SkinName, FOnApplySkin InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddSkin(FGuid InPlayerUId, FName SkinName);
    
};

