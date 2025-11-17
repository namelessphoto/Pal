#pragma once
#include "CoreMinimal.h"
#include "PalCharacterList.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalCharacterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<APalCharacter*> CharacterList;
    
    PAL_API FPalCharacterList();
};

