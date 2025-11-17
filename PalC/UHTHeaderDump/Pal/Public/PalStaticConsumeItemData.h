#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticConsumeItemData.generated.h"

UCLASS()
class UPalStaticConsumeItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreHP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreSatiety;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RestoreSanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WazaID;
    
public:
    UPalStaticConsumeItemData();

    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRestoreSP() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRestoreSatiety() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRestoreSanity() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRestoreHP() const;
    
};

