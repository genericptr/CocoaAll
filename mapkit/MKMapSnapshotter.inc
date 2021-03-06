{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMapSnapshotter.h }

{$ifdef TYPES}
type
  MKMapSnapshotterPtr = ^MKMapSnapshotter;
{$endif}

{$ifdef TYPES}
type
  MKMapSnapshotCompletionHandler = reference to procedure (snapshot: MKMapSnapshot; error: NSError); cblock; cdecl { unavailable in watchos };
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshotter = objcclass external (NSObject)
  public
    function initWithOptions (options: MKMapSnapshotOptions): id; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: MKMapSnapshotCompletionHandler); message 'startWithCompletionHandler:';
    procedure startWithQueue_completionHandler (queue: dispatch_queue_t; completionHandler: MKMapSnapshotCompletionHandler); message 'startWithQueue:completionHandler:';
    procedure cancel; message 'cancel';
    function isLoading: objcbool; message 'isLoading';
  end;
{$endif}

