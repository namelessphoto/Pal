#pragma once
#include "CoreMinimal.h"
#include "DataRegistryId.h"
#include "DataRegistryLookup.h"
#include "EDataRegistryAcquireStatus.h"
#include "DataRegistryItemAcquiredBPCallbackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDataRegistryItemAcquiredBPCallback, FDataRegistryId, ItemId, FDataRegistryLookup, ResolvedLookup, EDataRegistryAcquireStatus, Status);

