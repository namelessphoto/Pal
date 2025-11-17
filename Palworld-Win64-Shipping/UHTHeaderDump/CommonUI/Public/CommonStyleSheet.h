#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommonStyleSheet.generated.h"

class UCommonStyleSheet;
class UCommonStyleSheetTypeBase;

UCLASS()
class UCommonStyleSheet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UCommonStyleSheetTypeBase*> Properties;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UCommonStyleSheet*> ImportedStyleSheets;
    
public:
    UCommonStyleSheet();

};

