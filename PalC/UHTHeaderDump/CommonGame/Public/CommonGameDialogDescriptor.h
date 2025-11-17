#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConfirmationDialogAction.h"
#include "CommonGameDialogDescriptor.generated.h"

UCLASS(BlueprintType)
class COMMONGAME_API UCommonGameDialogDescriptor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Body;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FConfirmationDialogAction> ButtonActions;
    
    UCommonGameDialogDescriptor();

};

