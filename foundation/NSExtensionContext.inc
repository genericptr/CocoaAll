{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSExtensionContext.h }

{$ifdef CALLBACKS}
type
  NSExtensionContextCompleteRequestReturningItemsCallback = reference to procedure (expired: objcbool); cblock; cdecl;
  NSExtensionContextOpenURLCallback = reference to procedure (success: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSExtensionContextPtr = ^NSExtensionContext;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef CLASSES}

type
  NSExtensionContext = objcclass external (NSObject)
  public
    function inputItems: NSArray; message 'inputItems';
    procedure completeRequestReturningItems_completionHandler (items: NSArray; completionHandler: NSExtensionContextCompleteRequestReturningItemsCallback); message 'completeRequestReturningItems:completionHandler:';
    procedure cancelRequestWithError (error: NSError); message 'cancelRequestWithError:';
    procedure openURL_completionHandler (URL: NSURL; completionHandler: NSExtensionContextOpenURLCallback); message 'openURL:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionItemsAndErrorsKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExtensionHostWillEnterForegroundNotification: NSString { unavailable in macos }; cvar; external;
  NSExtensionHostDidEnterBackgroundNotification: NSString { unavailable in macos }; cvar; external;
  NSExtensionHostWillResignActiveNotification: NSString { unavailable in macos }; cvar; external;
  NSExtensionHostDidBecomeActiveNotification: NSString { unavailable in macos }; cvar; external;
{$endif}

{$endif}
