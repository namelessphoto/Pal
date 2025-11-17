#pragma once
#include "CoreMinimal.h"
#include "CommonActionCommitedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCommonActionCommited, bool&, bPassThrough);

