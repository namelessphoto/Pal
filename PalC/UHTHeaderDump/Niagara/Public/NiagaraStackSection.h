#pragma once
#include "CoreMinimal.h"
#include "NiagaraStackSection.generated.h"

USTRUCT()
struct FNiagaraStackSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SectionIdentifier;
    
    UPROPERTY(EditAnywhere)
    FText SectionDisplayName;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> Categories;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    NIAGARA_API FNiagaraStackSection();
};

