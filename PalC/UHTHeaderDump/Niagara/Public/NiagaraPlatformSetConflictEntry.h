#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.generated.h"

USTRUCT()
struct FNiagaraPlatformSetConflictEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ProfileName;
    
    UPROPERTY()
    int32 QualityLevelMask;
    
    NIAGARA_API FNiagaraPlatformSetConflictEntry();
};

