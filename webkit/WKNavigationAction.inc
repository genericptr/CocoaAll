{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKNavigationAction.h }

{ Types from WKNavigationAction }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKNavigationActionPtr = ^WKNavigationAction;
{$endif}

{$ifdef TYPES}
type
  WKNavigationType = NSInteger;
  WKNavigationTypePtr = ^WKNavigationType;

const
  WKNavigationTypeLinkActivated = 0;
  WKNavigationTypeFormSubmitted = 1;
  WKNavigationTypeBackForward = 2;
  WKNavigationTypeReload = 3;
  WKNavigationTypeFormResubmitted = 4;
  WKNavigationTypeOther = -1;
{$endif}

{$ifdef CLASSES}

type
  WKNavigationAction = objcclass external (NSObject)
  public
    function sourceFrame: WKFrameInfo; message 'sourceFrame';
    function targetFrame: WKFrameInfo; message 'targetFrame';
    function navigationType: WKNavigationType; message 'navigationType';
    function request: NSURLRequest; message 'request';
    function shouldPerformDownload: objcbool; message 'shouldPerformDownload'; { available in macos , ios  }
    {$if  not defined(TARGET_OS_IPHONE)}
    function modifierFlags: NSEventModifierFlags; message 'modifierFlags';
    function buttonNumber: NSInteger; message 'buttonNumber';
    {$endif}
  end;
{$endif}

