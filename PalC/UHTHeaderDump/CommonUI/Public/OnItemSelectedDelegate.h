#pragma once
#include "CoreMinimal.h"
#include "OnItemSelectedDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnItemSelected, UUserWidget*, Widget, bool, Selected);

