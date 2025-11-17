#pragma once
#include "CoreMinimal.h"
#include "SanitizeDisplayNameAsyncFunctionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSanitizeDisplayNameAsyncFunction, bool, IsSuccess, const FString&, OutString);

