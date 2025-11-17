#pragma once
#include "CoreMinimal.h"
#include "OutputErrorDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutputErrorDelegate, const FString&, ErrorMsg);

