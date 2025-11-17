#pragma once
#include "CoreMinimal.h"
#include "OnItemClickedDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnItemClicked, UUserWidget*, Widget);

