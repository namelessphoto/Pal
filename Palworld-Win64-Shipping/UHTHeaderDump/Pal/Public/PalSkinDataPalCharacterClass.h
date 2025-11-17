#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataPalCharacterClass.generated.h"

class APalCharacter;

UCLASS()
class UPalSkinDataPalCharacterClass : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<APalCharacter> NormalCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<APalCharacter> BossCharacterClass;
    
    UPalSkinDataPalCharacterClass();

};

