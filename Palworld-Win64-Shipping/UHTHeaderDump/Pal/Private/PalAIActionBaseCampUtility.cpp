#include "PalAIActionBaseCampUtility.h"

UPalAIActionBaseCampUtility::UPalAIActionBaseCampUtility() {
}

TEnumAsByte<EAIRequestPriority> UPalAIActionBaseCampUtility::GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority) {
    return EAIRequestPriority::SoftScript;
}


