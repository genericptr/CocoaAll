{ Parsed from ReplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ReplayKit.framework/Headers/RPPreviewViewController.h }

{ Types from RPPreviewViewController }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  RPPreviewViewControllerPtr = ^RPPreviewViewController;
  RPPreviewViewControllerDelegateProtocolPtr = ^RPPreviewViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_TV)}
{$ifdef TYPES}
type
  RPPreviewViewControllerMode = NSInteger;
  RPPreviewViewControllerModePtr = ^RPPreviewViewControllerMode;

const
  RPPreviewViewControllerModePreview = 0;
  RPPreviewViewControllerModeShare = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  RPPreviewViewController = objcclass external (NSViewController)
  public
    procedure setPreviewControllerDelegate(newValue: id); message 'setPreviewControllerDelegate:';
    function previewControllerDelegate: id; message 'previewControllerDelegate';
    {$if defined(TARGET_OS_TV)}
    procedure setMode(newValue: RPPreviewViewControllerMode); message 'setMode:'; { available in 10_0 }
    function mode: RPPreviewViewControllerMode; message 'mode'; { available in 10_0 }
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  RPPreviewViewControllerDelegateProtocol = objcprotocol external name 'RPPreviewViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure previewControllerDidFinish (previewController: RPPreviewViewController); message 'previewControllerDidFinish:';
    procedure previewController_didFinishWithActivityTypes (previewController: RPPreviewViewController; activityTypes: NSSet); message 'previewController:didFinishWithActivityTypes:';
  end;
{$endif}
