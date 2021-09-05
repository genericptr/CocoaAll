{ Parsed from ScreenSaver.framework ScreenSaverView.h }


{$ifdef TYPES}
type
  ScreenSaverViewPtr = ^ScreenSaverView;
{$endif}

{$ifdef CLASSES}

type
  ScreenSaverView = objcclass external (NSView)
  private
    _animationTimer: NSTimer;
    _timeInterval: NSTimeInterval;
    _isPreview: objcbool;
    _reserved1: pointer;
    _reserved2: pointer;
    _reserved3: pointer;
  public
    class function backingStoreType: NSBackingStoreType; message 'backingStoreType';
    class function performGammaFade: objcbool; message 'performGammaFade';
    function initWithFrame (frame: NSRect): id; message 'initWithFrame:';
    function initWithFrame_isPreview (frame: NSRect; isPreview: objcbool): id; message 'initWithFrame:isPreview:';
    function animationTimeInterval: NSTimeInterval; message 'animationTimeInterval';
    procedure setAnimationTimeInterval (timeInterval: NSTimeInterval); message 'setAnimationTimeInterval:';
    procedure startAnimation; message 'startAnimation';
    procedure stopAnimation; message 'stopAnimation';
    function isAnimating: objcbool; message 'isAnimating';
    procedure drawRect (rect: NSRect); message 'drawRect:';
    procedure animateOneFrame; message 'animateOneFrame';
    function hasConfigureSheet: objcbool; message 'hasConfigureSheet';
    function configureSheet: NSWindow; message 'configureSheet';
    function isPreview: objcbool; message 'isPreview';
  end;
{$endif}

