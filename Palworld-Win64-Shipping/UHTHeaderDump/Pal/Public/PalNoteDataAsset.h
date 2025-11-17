#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalNoteDataAsset.generated.h"

class UPalNoteData;

UCLASS(BlueprintType)
class PAL_API UPalNoteDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, UPalNoteData*> NoteDataMap;
    
    UPalNoteDataAsset();

    UFUNCTION(BlueprintPure)
    UPalNoteData* Find(const FName ID) const;
    
};

