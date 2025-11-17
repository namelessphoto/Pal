    Success = 0,
    Blocked = 1,
    OffPath = 2,
    Aborted = 3,
    Skipped_DEPRECATED = 4,
    Invalid = 5,
    EPathFollowingResult_MAX = 6,
};

    Processing = 0,
    Success = 1,
    Failed = 2,
    Aborted = 3,
    OwnerLost = 4,
    MissingParam = 5,
    EEnvQueryStatus_MAX = 6,
};

    NotStarted = 0,
    InProgress = 1,
    Success = 2,
    Failed = 3,
    Aborted = 4,
    EPawnActionResult_MAX = 5,
};

    SoftScript = 0,
    SoftScriptInterrupt = 1,
    Logic = 10,
    HardScript = 11,
    Reaction = 12,
    Ultimate = 13,
    MAX = 14,
};

    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3,
};

    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    MAX = 3,
};

    NeverStarted = 0,
    NotBeingAborted = 1,
    MarkPendingAbort = 2,
    LatentAbortInProgress = 3,
    AbortDone = 4,
    MAX = 5,
};

    Invalid = 0,
    FailedToStart = 1,
    InstantAbort = 2,
    FinishedAborting = 3,
    FinishedExecution = 4,
    Push = 5,
    EPawnActionEventType_MAX = 6,
};

    Animation = 0,
    Logic = 1,
    Script = 2,
    Gameplay = 3,
    MAX = 4,
};

    Less = 0,
    LessOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    IsTrue = 6,
    MAX = 7,
};

    Filter = 0,
    Score = 1,
    FilterAndScore = 2,
    EEnvTestPurpose_MAX = 3,
};

    Minimum = 0,
    Maximum = 1,
    Range = 2,
    Match = 3,
    EEnvTestFilterType_MAX = 4,
};

    Linear = 0,
    Square = 1,
    InverseLinear = 2,
    SquareRoot = 3,
    Constant = 4,
    EEnvTestScoreEquation_MAX = 5,
};

    None = 0,
    Square = 1,
    Inverse = 2,
    Unused = 3,
    Constant = 4,
    Skip = 5,
    EEnvTestWeight_MAX = 6,
};

    Low = 0,
    Medium = 1,
    High = 2,
    EEnvTestCost_MAX = 3,
};

    AllPass = 0,
    AnyPass = 1,
    EEnvTestFilterOperator_MAX = 2,
};

    AverageScore = 0,
    MinScore = 1,
    MaxScore = 2,
    Multiply = 3,
    EEnvTestScoreOperator_MAX = 4,
};

    SingleResult = 0,
    RandomBest5Pct = 1,
    RandomBest25Pct = 2,
    AllMatching = 3,
    EEnvQueryRunMode_MAX = 4,
};

    Float = 0,
    Int = 1,
    Bool = 2,
    EEnvQueryParam_MAX = 3,
};

    Float = 0,
    Int = 1,
    Bool = 2,
    MAX = 3,
};

    None = 0,
    Navigation = 1,
    GeometryByChannel = 2,
    GeometryByProfile = 3,
    NavigationOverLedges = 4,
    EEnvQueryTrace_MAX = 5,
};

    Line = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
    EEnvTraceShape_MAX = 4,
};

    Box = 0,
    Sphere = 1,
    Capsule = 2,
    EEnvOverlapShape_MAX = 3,
};

    TwoPoints = 0,
    Rotation = 1,
    EEnvDirection_MAX = 2,
};

    None = 0,
    SpecifiedValue = 1,
    FilterThreshold = 2,
    EEnvQueryTestClamping_MAX = 3,
};

    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    ETeamAttitude_MAX = 3,
};

    CopyBeforeTriggering = 0,
    ReuseInstances = 1,
    EPawnSubActionTriggeringPolicy_MAX = 2,
};

    RequireSuccess = 0,
    IgnoreFailure = 1,
    EPawnActionFailHandling_MAX = 2,
};

    UsePathfinding = 0,
    StraightLine = 1,
    EPawnActionMoveMode_MAX = 2,
};

    Succeeded = 0,
    Failed = 1,
    Aborted = 2,
    InProgress = 3,
    EBTNodeResult_MAX = 4,
};

    None = 0,
    LowerPriority = 1,
    Self = 2,
    Both = 3,
    EBTFlowAbortMode_MAX = 4,
};

    Set = 0,
    NotSet = 1,
    EBasicKeyOperation_MAX = 2,
};

    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
    EArithmeticKeyOperation_MAX = 6,
};

    Equal = 0,
    NotEqual = 1,
    Contain = 2,
    NotContain = 3,
    ETextKeyOperation_MAX = 4,
};

    FirstNode = 0,
    TaskNode = 1,
    EBTChildIndex_MAX = 2,
};

    Invalid = 0,
    Test = 1,
    And = 2,
    Or = 3,
    Not = 4,
    EBTDecoratorLogic_MAX = 5,
};

    AbortBackground = 0,
    WaitForBackground = 1,
    EBTParallelMode_MAX = 2,
};

    ValueChange = 0,
    ResultChange = 1,
    EBTBlackboardRestart_MAX = 2,
};

    Equal = 0,
    NotEqual = 1,
    EBlackBoardEntryComparison_MAX = 2,
};

    NavmeshRaycast2D = 0,
    HierarchicalQuery = 1,
    RegularPathFinding = 2,
    EPathExistanceQueryType_MAX = 3,
};

    Absolute = 0,
    RelativeToScores = 1,
    EEQSNormalizationType_MAX = 2,
};

    All = 0,
    Best5Pct = 1,
    Best25Pct = 2,
    EEnvQueryHightlightMode_MAX = 3,
};

    BySpaceBetween = 0,
    ByNumberOfPoints = 1,
    EPointOnCircleSpacingMethod_MAX = 2,
};

    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    DistanceAbsoluteZ = 3,
    EEnvTestDistance_MAX = 4,
};

    Dot3D = 0,
    Dot2D = 1,
    EEnvTestDot_MAX = 2,
};

    PathExist = 0,
    PathCost = 1,
    PathLength = 2,
    EEnvTestPathfinding_MAX = 3,
};

    Idle = 0,
    Waiting = 1,
    Paused = 2,
    Moving = 3,
    EPathFollowingStatus_MAX = 4,
};

    Error = 0,
    NoMove = 1,
    DirectMove = 2,
    PartialPath = 3,
    PathToGoal = 4,
    EPathFollowingAction_MAX = 5,
};

    Failed = 0,
    AlreadyAtGoal = 1,
    RequestSuccessful = 2,
    EPathFollowingRequestResult_MAX = 3,
};

    OnEveryPerception = 0,
    OnPerceptionChange = 1,
    EAISenseNotifyType_MAX = 2,
};

    Lowest = 0,
    Low = 64,
    AutonomousAI = 127,
    High = 192,
    Ultimate = 254,
    EAITaskPriority_MAX = 255,
};

