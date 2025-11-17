#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NoteData.h"
#include "PalLevelObjectObtainable.h"
#include "PalLevelObjectNote.generated.h"

UCLASS()
class PAL_API APalLevelObjectNote : public APalLevelObjectObtainable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FPalDataTableRowName_NoteData NoteRowName;
    
public:
    APalLevelObjectNote(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

