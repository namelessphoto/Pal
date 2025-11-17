#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsSessionType.generated.h"

UENUM(Flags)
    HRSST_InProcess,
    HRSST_Socket,
    HRSST_NamedPipe,
    HRSST_None,
};

