    Unchecked = 0,
    Checked = 1,
    Undetermined = 2,
    ECheckBoxState_MAX = 3,
};

    Inherit = 0,
    ClipToBounds = 1,
    ClipToBoundsWithoutIntersecting = 2,
    ClipToBoundsAlways = 3,
    OnDemand = 4,
    EWidgetClipping_MAX = 5,
};

    FixedRadius = 0,
    HalfHeightRadius = 1,
    ESlateBrushRoundingType_MAX = 2,
};

    UseColor_Specified = 0,
    UseColor_ColorTable = 1,
    UseColor_Foreground = 2,
    UseColor_Foreground_Subdued = 3,
    UseColor_UseStyle = 4,
    UseColor_MAX = 5,
};

    NoImage = 0,
    FullColor = 1,
    Linear = 2,
    Vector = 3,
    ESlateBrushImageType_MAX = 4,
};

    NoMirror = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushMirrorType_MAX = 4,
};

    NoTile = 0,
    Horizontal = 1,
    Vertical = 2,
    Both = 3,
    ESlateBrushTileType_MAX = 4,
};

    NoDrawType = 0,
    Box = 1,
    Border = 2,
    Image = 3,
    RoundedBox = 4,
    ESlateBrushDrawType_MAX = 5,
};

    Escape = 0,
    Explicit = 1,
    Wrap = 2,
    Stop = 3,
    Custom = 4,
    CustomBoundary = 5,
    Invalid = 6,
    EUINavigationRule_MAX = 7,
};

    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Next = 4,
    Previous = 5,
    Num = 6,
    Invalid = 7,
    EUINavigation_MAX = 8,
};

    Inherit = 0,
    Culture = 1,
    LeftToRight = 2,
    RightToLeft = 3,
    EFlowDirectionPreference_MAX = 4,
};

    OnKeyPress = 0,
    OnNavigation = 1,
    OnMouseClick = 2,
    Direct = 3,
    ESelectInfo_MAX = 4,
};

    VAlign_Fill = 0,
    VAlign_Top = 1,
    VAlign_Center = 2,
    VAlign_Bottom = 3,
    VAlign_MAX = 4,
};

    Default = 0,
    OnEnter = 1,
    OnUserMovedFocus = 2,
    OnCleared = 3,
    ETextCommit_MAX = 4,
};

    Clip = 0,
    Ellipsis = 1,
    ETextOverflowPolicy_MAX = 2,
};

    Auto = 0,
    KerningOnly = 1,
    FullShaping = 2,
    ETextShapingMethod_MAX = 3,
};

    None = 0,
    ToLower = 1,
    ToUpper = 2,
    ETextTransformPolicy_MAX = 3,
};

    MenuPlacement_BelowAnchor = 0,
    MenuPlacement_CenteredBelowAnchor = 1,
    MenuPlacement_BelowRightAnchor = 2,
    MenuPlacement_ComboBox = 3,
    MenuPlacement_ComboBoxRight = 4,
    MenuPlacement_MenuRight = 5,
    MenuPlacement_AboveAnchor = 6,
    MenuPlacement_CenteredAboveAnchor = 7,
    MenuPlacement_AboveRightAnchor = 8,
    MenuPlacement_MenuLeft = 9,
    MenuPlacement_Center = 10,
    MenuPlacement_RightLeftCenter = 11,
    MenuPlacement_MatchBottomLeft = 12,
    MenuPlacement_MAX = 13,
};

    NormalVision = 0,
    Deuteranope = 1,
    Protanope = 2,
    Tritanope = 3,
    EColorVisionDeficiency_MAX = 4,
};

    HAlign_Fill = 0,
    HAlign_Left = 1,
    HAlign_Center = 2,
    HAlign_Right = 3,
    HAlign_MAX = 4,
};

    Orient_Horizontal = 0,
    Orient_Vertical = 1,
    Orient_MAX = 2,
};

    DownAndUp = 0,
    MouseDown = 1,
    MouseUp = 2,
    PreciseClick = 3,
    EButtonClickMethod_MAX = 4,
};

    DownAndUp = 0,
    Down = 1,
    PreciseTap = 2,
    EButtonTouchMethod_MAX = 3,
};

    DownAndUp = 0,
    ButtonPress = 1,
    ButtonRelease = 2,
    EButtonPressMethod_MAX = 3,
};

    Accept = 0,
    Back = 1,
    Num = 2,
    Invalid = 3,
    EUINavigationAction_MAX = 4,
};

    FocusedWidget = 0,
    WidgetUnderCursor = 1,
    ENavigationSource_MAX = 2,
};

    Keyboard = 0,
    Controller = 1,
    User = 2,
    ENavigationGenesis_MAX = 3,
};

    Scroll_Down = 0,
    Scroll_Up = 1,
    Scroll_MAX = 2,
};

    MouseMove = 0,
    MouseEnter = 1,
    MouseLeave = 2,
    PreviewMouseButtonDown = 3,
    MouseButtonDown = 4,
    MouseButtonUp = 5,
    MouseButtonDoubleClick = 6,
    MouseWheel = 7,
    TouchStart = 8,
    TouchEnd = 9,
    TouchForceChanged = 10,
    TouchFirstMove = 11,
    TouchMoved = 12,
    DragDetected = 13,
    DragEnter = 14,
    DragLeave = 15,
    DragOver = 16,
    DragDrop = 17,
    DropMessage = 18,
    PreviewKeyDown = 19,
    KeyDown = 20,
    KeyUp = 21,
    KeyChar = 22,
    AnalogInput = 23,
    TouchGesture = 24,
    MotionDetected = 25,
    MAX = 26,
};

    MouseCaptureGained = 0,
    MouseCaptureLost = 1,
    ESlateDebuggingStateChangeEvent_MAX = 2,
};

    Unknown = 0,
    Explicit = 1,
    CustomDelegateBound = 2,
    CustomDelegateUnbound = 3,
    NextOrPrevious = 4,
    HitTestGrid = 5,
    ESlateDebuggingNavigationMethod_MAX = 6,
};

    FocusChanging = 0,
    FocusLost = 1,
    FocusReceived = 2,
    MAX = 3,
};

    Default = 0,
    Auto = 1,
    AutoLight = 2,
    Monochrome = 3,
    None = 4,
    EFontHinting_MAX = 5,
};

    LazyLoad = 0,
    Stream = 1,
    Inline = 2,
    EFontLoadingPolicy_MAX = 3,
};

    Metrics = 0,
    BoundingBox = 1,
    EFontLayoutMethod_MAX = 2,
};

    Mouse = 0,
    Navigation = 1,
    SetDirectly = 2,
    Cleared = 3,
    OtherWidgetLostFocus = 4,
    WindowActivate = 5,
    EFocusCause_MAX = 6,
};

    WhenScrollingPossible = 0,
    Always = 1,
    Never = 2,
    EConsumeMouseWheel_MAX = 3,
};

    ActiveWindow = 0,
    MainWindow = 1,
    ESlateParentWindowSearchMethod_MAX = 2,
};

    CheckBox = 0,
    ToggleButton = 1,
    ESlateCheckBoxType_MAX = 2,
};

    Black = 0,
    Background = 1,
    Title = 2,
    WindowBorder = 3,
    Foldout = 4,
    Input = 5,
    InputOutline = 6,
    Recessed = 7,
    Panel = 8,
    Header = 9,
    Dropdown = 10,
    DropdownOutline = 11,
    Hover = 12,
    Hover2 = 13,
    White = 14,
    White25 = 15,
    Highlight = 16,
    Primary = 17,
    PrimaryHover = 18,
    PrimaryPress = 19,
    Secondary = 20,
    Foreground = 21,
    ForegroundHover = 22,
    ForegroundInverted = 23,
    ForegroundHeader = 24,
    Select = 25,
    SelectInactive = 26,
    SelectParent = 27,
    SelectHover = 28,
    Notifications = 29,
    AccentBlue = 30,
    AccentPurple = 31,
    AccentPink = 32,
    AccentRed = 33,
    AccentOrange = 34,
    AccentYellow = 35,
    AccentGreen = 36,
    AccentBrown = 37,
    AccentBlack = 38,
    AccentGray = 39,
    AccentWhite = 40,
    AccentFolder = 41,
    Warning = 42,
    Error = 43,
    Success = 44,
    User1 = 45,
    User2 = 46,
    User3 = 47,
    User4 = 48,
    User5 = 49,
    User6 = 50,
    User7 = 51,
    User8 = 52,
    User9 = 53,
    User10 = 54,
    User11 = 55,
    User12 = 56,
    User13 = 57,
    User14 = 58,
    User15 = 59,
    User16 = 60,
    MAX = 61,
};

