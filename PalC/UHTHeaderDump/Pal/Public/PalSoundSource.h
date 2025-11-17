#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalSoundSource.generated.h"

USTRUCT(BlueprintType)
struct FPalSoundSource : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Radius_Meter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsMuteable;
    
    PAL_API FPalSoundSource();
};

