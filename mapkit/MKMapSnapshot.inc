{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMapSnapshot.h }

{ Types from MKMapSnapshot }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKMapSnapshotPtr = ^MKMapSnapshot;
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshot = objcclass external (NSObject)
  public
    {$if defined(TARGET_OS_IPHONE)}
    function image: UIImagePtr; message 'image';
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): CGPoint; message 'pointForCoordinate:';
    function traitCollection: UITraitCollectionPtr; message 'traitCollection'; { unavailable in watchos }
    {$else}
    function image_: NSImage; message 'image';
    function appearance: NSAppearancePtr; message 'appearance'; { unavailable in ios, tvos, watchos }
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): NSPoint; message 'pointForCoordinate:';
    {$endif}
  end;
{$endif}

