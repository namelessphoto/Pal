    Boolean = 0,
    Axis1D = 1,
    Axis2D = 2,
    Axis3D = 3,
    EInputActionValueType_MAX = 4,
};

    Error_EnhancedInputNotEnabled = 0,
    Error_InputContextNotInActiveContexts = 1,
    Error_InvalidAction = 2,
    NotMappable = 3,
    MappingAvailable = 4,
    EMappingQueryResult_MAX = 5,
};

    NoIssue = 0,
    ReservedByAction = 1,
    HidesExistingMapping = 2,
    HiddenByExistingMapping = 4,
    CollisionWithMappingInSameContext = 8,
    ForcesTypePromotion = 16,
    ForcesTypeDemotion = 32,
    EMappingQueryIssue_MAX = 33,
};

    None = 0,
    Rebuild = 1,
    RebuildWithFlush = 2,
    EInputMappingRebuildType_MAX = 3,
};

    Axial = 0,
    Radial = 1,
    EDeadZoneType_MAX = 2,
};

    Standard = 0,
    UE4_BackCompat = 1,
    EFOVScalingType_MAX = 2,
};

    YXZ = 0,
    ZYX = 1,
    XZY = 2,
    YZX = 3,
    ZXY = 4,
    EInputAxisSwizzle_MAX = 5,
};

    None = 0,
    Ongoing = 1,
    Triggered = 2,
    ETriggerState_MAX = 3,
};

    None = 0,
    Triggered = 1,
    Started = 2,
    Ongoing = 3,
    Canceled = 4,
    Completed = 5,
    ETriggerEvent_MAX = 6,
};

    Explicit = 0,
    Implicit = 1,
    Blocker = 2,
    ETriggerType_MAX = 3,
};

    None = 0,
    Instant = 1,
    Uninterruptible = 2,
    Ongoing = 4,
    All = 7,
    ETriggerEventsSupported_MAX = 8,
};

