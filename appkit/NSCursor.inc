{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSCursor.h }

{ Types from NSCursor }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSCursorPtr = ^NSCursor;
{$endif}

{$ifdef CLASSES}

type
  NSCursor = objcclass external (NSObject, NSCodingProtocol)
  public
    class function currentCursor: NSCursor; message 'currentCursor';
    class function currentSystemCursor: NSCursor; message 'currentSystemCursor'; { available in macos  }
    class function arrowCursor: NSCursor; message 'arrowCursor';
    class function IBeamCursor: NSCursor; message 'IBeamCursor';
    class function pointingHandCursor: NSCursor; message 'pointingHandCursor';
    class function closedHandCursor: NSCursor; message 'closedHandCursor';
    class function openHandCursor: NSCursor; message 'openHandCursor';
    class function resizeLeftCursor: NSCursor; message 'resizeLeftCursor';
    class function resizeRightCursor: NSCursor; message 'resizeRightCursor';
    class function resizeLeftRightCursor: NSCursor; message 'resizeLeftRightCursor';
    class function resizeUpCursor: NSCursor; message 'resizeUpCursor';
    class function resizeDownCursor: NSCursor; message 'resizeDownCursor';
    class function resizeUpDownCursor: NSCursor; message 'resizeUpDownCursor';
    class function crosshairCursor: NSCursor; message 'crosshairCursor';
    class function disappearingItemCursor: NSCursor; message 'disappearingItemCursor';
    class function operationNotAllowedCursor: NSCursor; message 'operationNotAllowedCursor'; { available in macos  }
    class function dragLinkCursor: NSCursor; message 'dragLinkCursor'; { available in macos  }
    class function dragCopyCursor: NSCursor; message 'dragCopyCursor'; { available in macos  }
    class function contextualMenuCursor: NSCursor; message 'contextualMenuCursor'; { available in macos  }
    class function IBeamCursorForVerticalLayout: NSCursor; message 'IBeamCursorForVerticalLayout'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    function initWithImage_hotSpot (newImage: NSImage; point: NSPoint): id; message 'initWithImage:hotSpot:'; { NS_DESIGNATED_INITIALIZER }
    {$else}
    function initWithImage_hotSpot (newImage: UIImage; point: NSPoint): id; message 'initWithImage:hotSpot:'; { NS_DESIGNATED_INITIALIZER }
    {$endif}
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class procedure hide; message 'hide';
    class procedure unhide; message 'unhide';
    class procedure setHiddenUntilMouseMoves (flag: objcbool); message 'setHiddenUntilMouseMoves:';
    class procedure classPop; message 'pop';
    {$if  not defined(TARGET_OS_IPHONE)}
    function image: NSImage; message 'image';
    {$else}
    function image_: UIImage; message 'image';
    {$endif}
    function hotSpot: NSPoint; message 'hotSpot';
    procedure push; message 'push';
    procedure pop; message 'pop';
    procedure set_; message 'set';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithCursorSizeSupport = 682.0;
{$endif}

{$ifdef CLASSES}

type
  NSCursor_NSDeprecated = objccategory external name 'NSDeprecated' (NSCursor)
    function initWithImage_foregroundColorHint_backgroundColorHint_hotSpot (newImage: NSImage; fg: NSColor; bg: NSColor; hotSpot_: NSPoint): id; message 'initWithImage:foregroundColorHint:backgroundColorHint:hotSpot:'; deprecated 'Color hints are ignored. Use -initWithImage:hotSpot: instead';
    procedure setOnMouseExited (flag: objcbool); message 'setOnMouseExited:'; deprecated 'setOnMouseExited is unused and should not be called';
    procedure setOnMouseEntered (flag: objcbool); message 'setOnMouseEntered:'; deprecated 'setOnMouseEntered is unused and should not be called';
    function isSetOnMouseExited: objcbool; message 'isSetOnMouseExited'; deprecated 'isSetOnMouseExited is unused';
    function isSetOnMouseEntered: objcbool; message 'isSetOnMouseEntered'; deprecated 'isSetOnMouseEntered is unused';
    procedure mouseEntered (event: NSEvent); message 'mouseEntered:'; deprecated 'mouseEntered: is unused and should not be called';
    procedure mouseExited (event: NSEvent); message 'mouseExited:'; deprecated 'mouseExited: is unused and should not be called';
  end;
{$endif}

