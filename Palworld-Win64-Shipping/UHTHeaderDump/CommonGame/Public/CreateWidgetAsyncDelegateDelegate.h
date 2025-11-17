#pragma once
#include "CoreMinimal.h"
#include "CreateWidgetAsyncDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreateWidgetAsyncDelegate, UUserWidget*, UserWidget);

